#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int x[101]={};
    for(int i=0; i<n; i++){
        scanf("%d", &x[i]);
    }
    int v;
    scanf("%d", &v);
    int cnt=0;
    for(int i=0; i<n; i++){
        if(x[i]==v){
            cnt++;
        }
    }
    printf("%d", cnt);
}