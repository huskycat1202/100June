#include<stdio.h>
int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n,m,a,b,p,q;
        long long int ans=0, min=10000, max=-1;
        scanf("%d%d",&n,&m);
        long long int S[1002]={}, A[1002]={};
        for(int i=1; i<=m; i++){
            scanf("%d%d%d%d",&a,&b,&p,&q);
            S[a]+=p; A[a]+=q;
            S[b]+=q; A[b]+=p;
        }
        for(int i=1; i<=n; i++){
            if(S[i]==0 && A[i]==0) ans=0;
            else ans=(1000*S[i]*S[i])/(S[i]*S[i]+A[i]*A[i]);
            if(ans<=min) min=ans;
            if(ans>=max) max=ans;
        }
        printf("%lld\n%lld", max, min);
        if(t!=0) printf("\n");
    }
}