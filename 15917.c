#include<stdio.h>
int main(){
    int q; scanf("%d", &q);
    long long int a;
    for(int i=0; i<q; i++){
        scanf("%lld", &a);
        if(a==1) printf("1");
        else if(a%2==1) printf("0");
        else{
            while(a%2==0) a/=2;
            if(a==1) printf("1");
            else printf("0");
        }
        printf("\n");
    } 
}