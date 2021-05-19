#include<stdio.h>
#include<string.h> 
 int main(){
 	char x[101]={};
 	scanf("%s", x); // x[0]='m', x[1]='i', x[2]='c'
 	int k=strlen(x); // 3
 	int m; // count
	for(int i=97; i<='z'; i++){ // a~z
		m=0;
		for(int j=0; j<k; j++){ // 문자열 길이만큼=3
			if(x[j]==i){ // 'c'=='c'
				m++;			
			}
		}
		printf("%d ", m);
 	}
	return 0;
}