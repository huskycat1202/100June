#include<stdio.h>

void fib(int n){
    int f1 = 0;
    int f2 = 1;
    int cnt;
    if(n>=2){
        for(int i =0; i<n-1; i++){
            cnt = f1;
            f1 = f2;
            f2 = f1 + cnt;
        }
    }
    printf("%d",f2);
    if(n==1){
        printf("%d",f2);
    }
    else{
        printf("%d",f1);
    }
}



int main(){
    int n;
    scanf("%d",&n);
    fib(n);
}