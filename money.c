#include<stdio.h>
int main(){
    int h=-1, m=-1, hour=0, minute=0;

    while(h!=0 || m!=0){
        scanf("%d %d",&h, &m);
        hour+=h;
        minute+=m;
    }
    printf("%d", hour*12000+minute*200);
}