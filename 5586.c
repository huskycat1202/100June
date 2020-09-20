#include<stdio.h>
#include<string.h>
int main(){
    char x[10001]; scanf("%s", x);
    int a=0, b=0;
    for(int i=2; x[i]!='\0'; i++){
        if(x[i]=='I' && x[i-1]=='O'){
            if(x[i-2]=='J') a++;
            else if(x[i-2]=='I') b++;
        }
    }
    printf("%d\n%d", a, b);
}