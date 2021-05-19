#include<stdio.h>
#include<string.h>

char A[10005]={0};
char B[10005]={0};
char result[10005] = {0};

void reverse(char *num){
    for (int i = 0; i < strlen(num) / 2; i++) {
        char temp = num[i];
        num[i] = num[strlen(num) - i - 1];
        num[strlen(num) - i - 1] = temp;
    }
}
int main(){

    int round=0,sum;
    scanf("%s %s",A,B);
    reverse(A);
    reverse(B);
    int max_len = strlen(A)>strlen(B) ? strlen(A) : strlen(B);
    for(int i=0;i<max_len;i++){
        sum = A[i]-'0' + B[i]-'0' + round;
        if(sum<0){
            sum+='0';
        }
        result[i] =  (sum % 10) + '0';
        round = (sum > 9) ? 1 : 0;
    }
    if(round) result[max_len] = '1';
    reverse(result);
    printf("%s",result);
    return 0;
}