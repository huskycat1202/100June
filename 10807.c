#include<stdio.h>
int main(){
    int n=0;
    scanf("%d", &n);
    int x[101]={}; // 배열 내 값 전부 0으로
    for(int i=0; i<n; i++){
        scanf("%d", &x[i]); // 0번째 ~ n-1번째 입력
    }
    int v;
    scanf("%d", &v);
    int cnt=0;
    for(int i=0; i<n; i++){ // x 배열 검사
        if(x[i]==v){
            cnt++;
        }
    }
    printf("%d", cnt);
}