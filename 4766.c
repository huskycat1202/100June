#include<stdio.h>
int main(){
    float a,b=0; scanf("%f", &a);
    while(1){
        scanf("%f",&b);
        if(b!=999){
            printf("%.2f",b-a);
            a=b;
        }
        else return 0;
        printf("\n");
    }
}