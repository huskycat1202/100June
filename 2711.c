#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d", &t);
	for(int i=0; i<t; i++){
		int k;
		scanf("%d", &k); // 4
		char x[81]={};
		scanf("%s", x); //               MISSPELL
		for(int j=0; j<k-1; j++){      //01234567
			printf("%c", x[j]);        //12345678
		} // MIS
		int l = strlen(x); //8
		for(int j=k; j<l; j++){
			printf("%c", x[j]);
		} // PELL
		// MISPELL
		printf("\n");
	}
}