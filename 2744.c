#include<stdio.h>
#include<string.h> 
int main(){
 	char x[101]={};
 	scanf("%s", x); // WrongAnswer
 	int k = strlen(x);
	for(int i=0; i<k; i++){ // k번 = 문자열의 길이만큼
		if(x[i]<'a'){ // 대문자
			x[i]+=32; // 소문자로
		}
		else{ // 소문자
			x[i]-=32; // 대문자로
 		}
	}
 	printf("%s", x);
	return 0;
}