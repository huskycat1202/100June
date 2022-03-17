#include<stdio.h>
int main(){
    int n,m,r,g,b;
    char x[500][500];
    scanf("%d %d", &n, &m); // 16 11
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d %d %d", &r, &g, &b);
            int ans = 2126*r+7152*g+722*b;
            if(ans<510000){
                x[i][j]='#';
            }
            else if(ans<1020000){
                x[i][j]='o';
            }
            else if(ans<1530000){
                x[i][j]='+';
            }
            else if(ans<2040000){
                x[i][j]='-';
            }
            else{
                x[i][j]='.';
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%c", x[i][j]);
        }
        printf("\n");
    }
}