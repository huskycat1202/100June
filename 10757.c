#include<stdio.h>
#include<string.h>

void str_rev(char *x){ // 987
    int len=strlen(x); // 3
    for(int i=0; i<len/2; i++){
        char tmp=x[i]; // 9
        x[i]=x[len-i-1]; // 787
        x[len-i-1]=tmp; // 789
    }
}

int main(){
    char a[10002]={0}, b[10002]={0}, ans[10002]={0};
    scanf("%s %s", a, b); // 987 6789
    str_rev(a); // 789 
    str_rev(b); // 9876
    int len;
    if(strlen(a)>strlen(b)){
        len=strlen(a);
    }
    else{
        len=strlen(b);
    } // len=4
    int sum=0, plus=0;
    for(int i=0; i<len; i++){ //4
        sum=(a[i]-'0')+(b[i]-'0')+plus; // int
        if(sum<0){
            sum+='0';
        } // space + int
        plus=sum/10; // 1            
        ans[i]=(sum%10)+'0'; // char  6770
    }
    if(plus){
        ans[len]='1';
    } // char 67701
    str_rev(ans); // char 10776
    printf("%s", ans);
    return 0;
}