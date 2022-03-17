#include <stdio.h>
int main(){
	char a[6][16]={};
	for(int i=0; i<5; i++){
		scanf("%s", a[i]);
	}
	for(int j=0; j<15; j++){
		for(int i=0; i<5; i++){
			if(a[i][j]=='\0'){ // '\0' = null 값 없음
				continue;
			}
			printf("%c", a[i][j]);
		}
	}
	return 0;
}

/* 0,0 -> 1,0 -> 2,0 -> 3,0 -> 4,0 ->  0,1
AABCDD 
afzz  
09121 
a8EWg6
P5h3kx

Aa0
*/