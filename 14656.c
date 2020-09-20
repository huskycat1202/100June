#include<stdio.h>
int main(){
    int n,ans=0; scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int x; scanf("%d", &x);
        if(x!=i) ans++;
    }
    printf("%d", ans);
}