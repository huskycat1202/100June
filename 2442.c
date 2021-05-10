#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a=n-1; // 공백 1씩 줄이기 
	int b=1; // 별 2씩 늘리기 
	
	for(int i=0; i<n; i++){
		for(int j=0; j<a; j++){
			printf(" ");
		}
		for(int j=0; j<b; j++){
			printf("*");
		}
		printf("\n");
		a--;
		b+=2;
	}
}