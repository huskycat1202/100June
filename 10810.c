#include<stdio.h>
int main(){
    int n,m; scanf("%d%d", &n,&m);
    int x[102]={};
    for(int p=1; p<=m; p++){
        int i,j,k;
        scanf("%d%d%d", &i,&j,&k);
        for(int q=i; q<=j; q++){
            x[q]=k;
        }
    }
    for(int p=1; p<=n; p++){
        printf("%d ", x[p]);
    }
}