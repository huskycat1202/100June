#include<stdio.h>
int main(){
	int n, cnt=1;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<cnt; j++){
			printf("*");
		}
		cnt++;
		printf("\n");
	}
	return 0;
}