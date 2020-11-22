#include<stdio.h>
int main(){
 	int n;
 	scanf("%d", &n);
	repeat(n);
}

int repeat(int n){
	for(int a=1; a<=n; a++){
		printf("%d\n", a);
	}
}