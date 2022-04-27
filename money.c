#include<stdio.h>
int main(){
    int h=-1, m=-1, hour=0, minute=0;

    while(h!=0 || m!=0){
        scanf("%d %d",&h, &m);
        hour+=h;
        minute+=m;
    }
    hour+=minute/60;
    minute%=60;
    printf("%d:%d %d", hour, minute, hour*12000+minute*200);
}