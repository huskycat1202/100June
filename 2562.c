#include<stdio.h>
 int main(){
	int max=0, cnt;
    int a[10]={};
	for(int i=0; i<9; i++){
		scanf("%d", &a[i]);
		if (max < a[i]){
			max=a[i];
			cnt=i+1;
		}
	}
	printf("%d\n%d", max, cnt);
}