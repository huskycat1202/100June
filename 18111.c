#include<stdio.h>
int main(){
    int n,m,b; scanf("%d%d%d", &n,&m,&b);
    int x[501][501]={};
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &x[i][j]);
        }
    }

}
//삭제=2 추가=1
/*
b=0 무조건 삭제
max, min
*/