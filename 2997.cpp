#include<stdio.h>
int main(){
    int a,b,c;
    //input
    scanf("%d%d%d", &a,&b,&c);
    //compare
    if(a>b){
        int tmp=a;
        a=b;
        b=tmp; // a<->b
    }
    if(a>c){
        int tmp=a;
        a=c;
        c=tmp; // a<->c
    }
    if(b>c){
        int tmp=b;
        b=c;
        c=tmp; // b<->c
    }
    //차이
    int bma=b-a;
    int cmb=c-b;
    // 차이 == 일떄
    if(bma==cmb){
        if(c+cmb<=100){ // 4번
            printf("%d\n",c+cmb);
        }
        else{ // 1번
            printf("%d\n", a-bma);
        }
    }
    else if(bma>cmb){ // 2번
        printf("%d\n", a+cmb);
    }
    else{ // 3번
        printf("%d\n",c-bma);
    }
}