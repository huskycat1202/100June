#include<stdio.h>
#include<string.h>
int main(){
    int n; scanf("%d", &n);
    char x[101][14], rev[101][14];
    for(int i=0; i<n; i++){
        scanf("%s", x[i]);
        int xlen=strlen(x[0]); // 3
        for(int j=0; j<3; j++){
            rev[i][j]=x[i][xlen-j-1];
        } // reversed PW
        rev[i][xlen]='\0'; // 문자열 끝
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(strcmp(x[i],rev[j])==0){ // x[i] = rev[j] -> 0
                printf("%d %c", strlen(x[i]), x[i][strlen(x[i])/2]);
                return 0;
            }
        }
    }
}