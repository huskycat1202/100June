#include<stdio.h>
#include<string.h> 
 int main(){
 	char x[10000]={};
 	scanf("%s", x);
 	int k;
 	k=strlen(x);
	for(int i=0; i<k; i++){
		if(x[i]<95){
			x[i]=x[i]+32;}
		else{
			x[i]=x[i]-32;}
 		}
 	printf("%s", x);
	return 0;
 }