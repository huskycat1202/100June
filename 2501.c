#include<stdio.h>
int main(){
    int n,k; scanf("%d%d", &n,&k);
    for(int i=1; i<=n; i++){
        if(n%i==0){
            k--;
            if(k==0){
                printf("%d", i);
                return 0;
            }
        }
        if(i==n && k!=0) printf("0");
    }
}