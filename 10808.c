#include<stdio.h>
#include<string.h>
int main(){
 	char x[101]={};
 	scanf("%s", x); // x[0]='m', x[1]='i', x[2]='c'
 	int k = strlen(x); // 3
 	int m; // count
	for(int i='a'; i<='z'; i++){ // a~z 26번 반복
		m=0;
		for(int j=0; j<k; j++){ // 문자열 길이만큼 = 3
			if(x[j]=='i'){ // 'c'=='c'
				m++;			
			}
		} // x의 특정 알파벳이 어느 알파벳인지 확인
		printf("%d ", m);
 	}
	return 0;
}