#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int t;
    scanf("%d", &t);
    for(int c=1; c<=t; c++){
        int b=0, index=0, sum=0;
        char n[10000]={}, ans[10001]={};
        scanf("%d%s", &b, n);
        for(int i=0; i<b; i++){ // 출력할 문자수
            for(int j=0; j<8; j++){ // 8당 1문자
                if(n[index]=='I'){
                    sum+=pow(2,7-j); // 제곱
                }
                index++; // n에서 위치
            }
            ans[i]=sum; // 아스키코드 변환 d->c
            sum=0;
        }
        printf("Case #%d: %s\n", c, ans);
    }
}