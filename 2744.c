#include<stdio.h>
#include<string.h> 
int main(){
 	char x[101]={};
 	scanf("%s", x);
 	int k = strlen(x);
	for(int i=0; i<k; i++){
		if(x[i]<'a'){ 
			x[i]+=32;
		}
		else{
			x[i]-=32;
 		}
	}
 	printf("%s", x);
	return 0;
}