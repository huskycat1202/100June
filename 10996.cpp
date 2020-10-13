#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("*");
        for(int j=1; j<n; j++){
            if(j%2==0) printf(" *");
        }
        printf("\n");
        for(int j=1; j<n; j++){
            if(j%2==1) printf(" *");
        }
        if(n!=1) printf("\n");
    }
}