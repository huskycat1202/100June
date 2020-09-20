#include<stdio.h>
#include<string.h>
int main(){
    int t; scanf("%d", &t);
    while(t--){
        char x[1001]; scanf("%s", x);
        printf("%c%c\n", x[0], x[strlen(x)-1]);
    }
}