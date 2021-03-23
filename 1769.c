#include <stdio.h>
#include <string.h>
void change(char x[]){
    int cnt=0;
    int sum;
    while(strlen(x)>1){
        sum=0;
        for(int i=0; i<strlen(x); i++){
            sum += x[i] - '0';
        }
        cnt++;
    }
    printf("%d\n", cnt);
    /*
    if (sum/3==0)
        printf("NO");
    else
        printf("YES");
    */
}
int main(){
    char num[1000001];
    scanf("%s", num);
    change(num);
}