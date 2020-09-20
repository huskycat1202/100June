#include<stdio.h>
#include<string.h>
int main(){
    int n; scanf("%d", &n);
    char x[101][14], rev[101][14];
    for(int i=0; i<n; i++){
        scanf("%s", x[i]);
        int xlen=strlen(x[i]);
        for(int j=0; j<xlen; j++){
            rev[i][j]=x[i][xlen-j-1];
        }
        rev[i][xlen]='\0';
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(strcmp(x[i],rev[j])==0){
                printf("%d %c", strlen(x[i]), x[i][strlen(x[i])/2]);
                return 0;
            }
        }
    }
}