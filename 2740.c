#include<stdio.h>
int main(){
    int a[101][101]={}, b[101][101]={};
    int ans[101][101]={};
    int n,m; scanf("%d%d", &n, &m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int k; scanf("%d%d", &m, &k);
    for(int i=0; i<m; i++){
        for(int j=0; j<k; j++){
            scanf("%d", &b[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            for(int l=0; l<m; l++){
            ans[i][j]+= a[i][l]*b[l][j];
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }

}