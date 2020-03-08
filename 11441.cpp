#include<stdio.h>
int n,m,a[100001]={},i,j,sum[100001]={};
int main(){
    scanf("%d", &n);
    for(int _=1; _<=n; _++){
        scanf("%d",&a[_]);
        sum[_]=sum[_-1]+a[_];  
    }
    scanf("%d", &m);
    for(int _=0; _<m; _++){
        scanf("%d %d", &i,&j);
        printf("%d\n",sum[j]-sum[i-1]);
    }
}