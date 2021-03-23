#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int t,b;
    scanf("%d%d", &t, &b);
    for(int p=1; p<=t; p++){
        char n[10000]={};
        char ans[10001]={};
        int sum=0;
        int len=strlen(n);
        scanf("%s", n);
        printf("Case #%d: ",p);
        for(int i=0; i<len; i++){
            for(int j=0; j<8; j++){
                if(n[i]=='I'){
                    sum += pow(2,len-i);
                }
            }
            ans[i/8]=sum-'0';
        }
        printf("%s",ans);
    }
}