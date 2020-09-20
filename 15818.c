#include<stdio.h>
int main(){
    int n,m,ans=1; scanf("%d%d", &n,&m);
    long long int x[101]={};
    for(int i=0; i<n; i++){
        scanf("%lld", &x[i]);
        x[i]%=m;
        ans*=x[i];
    }
    printf("%lld", ans%m);
}