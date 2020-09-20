#include<stdio.h>
int main(){
    int n,num,x,sum=0,l[11]={0,2,2,2,2,2,2,2,2,2,2};
    int cnt[11]={};
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d%d", &num, &x);
        if(x!=l[num]){
            l[num]=x, cnt[num]++;
        }
    }
    for(int i=1; i<=10; i++){
        if(cnt[i]>1){
            sum+=cnt[i]-1;
        }
    }
    printf("%d", sum);
}