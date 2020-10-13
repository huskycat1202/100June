#include <stdio.h>
#include <stdlib.h> //랜덤함수 호출
#include <time.h>
int e=0,c=0;
void Swap(int arr[], int a, int b){ // a,b 스왑 함수 
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
    e++;
}
int Partition(int arr[], int left, int right){
    int pivotpoint = right;
    int pivot = arr[pivotpoint];
    
    Swap(arr,pivotpoint,right);    
 
    int i=left, j=left;
    for(;j<right;j++){
        c++;
        if(arr[j]<pivot || (j%2==0 && arr[j]==pivot)){
            Swap(arr,i++,j);
        }
    }
    Swap(arr,i,j);
    return i;
}
 
 
void QuickSort(int arr[], int left, int right){
    if (left <= right){
        int pivot = Partition(arr, left, right); // 둘로 나누어서
        QuickSort(arr, left, pivot - 1); // 왼쪽 영역을 정렬한다.
        QuickSort(arr, pivot + 1, right); // 오른쪽 영역을 정렬한다.
    }
}
 
//메인함수
int main(){
    int n,i;
    int arr[5001];

    printf("몇개의 숫자로 정렬하시겠습니까?\n");
    scanf("%d",&n);

	for(i = 0 ; i < n ; i++) arr[i]=rand()%10000;

    printf("정렬전 배열 :");
	for(i = 0 ; i < n ; i++) printf("%d ", arr[i]);
	printf("\n");

    clock_t start = clock(); // 시작 시간 저장
    QuickSort(arr,0,n-1);
    clock_t end = clock(); // 코드가 끝난 시간 저장

	printf("정렬후 배열 :");
    for(i = 0 ; i < n ; i++) printf("%d ", arr[i]);
	printf("\n");

    printf("Comparison : %d Exchange : %d\n", c,e);
    printf("Time: %lf\n", (double)(end - start));
    return 0;
}