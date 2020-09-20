#include<stdio.h>
int main(){
    int n,m; scanf("%d%d", &n, &m);
    int x[301][301]={0,};
    int dp[301][301]={0,};
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            scanf("%d", &x[i][j]);
            dp[i][j]=dp[i-1][j]+dp[i][j-1]+x[i][j]-dp[i-1][j-1];
        }
    }
    int k; scanf("%d", &k);
    while(k--){
        int i,j,x,y; scanf("%d%d%d%d", &i, &j, &x, &y);
        printf("%d\n",dp[x][y]-dp[x][j-1]-dp[i-1][y]+dp[i-1][j-1]);
    }
    
}