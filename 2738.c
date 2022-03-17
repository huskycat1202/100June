#include <stdio.h>
int main(){
	int arr[101][101]={};
	int n, m, x;
	scanf("%d%d",&n,&m); // 3,3
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	// A 배열 입력

	for(int i=0; i<n; i++){
		for(int j=0; j<3; j++){
			scanf("%d", &x); // B[i][j] 입력
			arr[i][j]+=x; // A 배열에 B 덧셈
			printf("%d ", arr[i][j]); // 바로 출력
		}
		printf("\n");
	}
}