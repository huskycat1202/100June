#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n); //n=5
    for(int i=0; i<n; i++){
        printf("%d\n",i+1);
    }
    for(int i=1; i<=n; i++){ // 1 2 3 4 5
        printf("%d\n",i);
    }
    int i=0;
    while(i<n){
        printf("%d\n",i+1);
        i++;
    }
}