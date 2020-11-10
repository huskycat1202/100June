#include<stdio.h>
#include<string.h>
int main(){
	int n, k;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &k);
		char x[81];
		scanf("%s", x);
		for(int j=0; j<k-1; j++){
			printf("%c", x[j]);
		}
		for(int j=k; j<strlen(x); j++){
			printf("%c", x[j]);
		}
		printf("\n");
	}
}