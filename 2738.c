#include <stdio.h>
int main(){
	int arr[1000][1000]={};
	int n, m, x;

	scanf("%d%d",&n,&m);

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d", &arr[i][j]);
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d", &x);
			arr[i][j]+=x;
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}