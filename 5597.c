#include<stdio.h>
int main(){
    int a[31]={}, n; // n = 제출한 사람
    for(int i=0; i<28; i++){
    	scanf("%d", &n);
    	a[n] = 1;
    } //  출석표에 과제 한사람 체크
    for(int i=1; i<=30; i++){
    	if(a[i]==0){ // 과제 체크 안된 사람
            printf("%d\n", i);
        }
	}
}