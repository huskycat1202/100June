#include<stdio.h>
int main(){
    int t; scanf("%d", &t);
    while(t--){
        char x[1001];
        int a[27]={};
        int ans=0;
        scanf("%s", x);
        for(int i=0; x[i]!='\0'; i++){
            if(a[x[i]-'\0'-65]==0){
                a[x[i]-'\0'-65]++;
                ans+=x[i]-'\0';
            }
        }
        printf("%d\n", 2015-ans);
    }
}