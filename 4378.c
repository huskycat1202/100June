#include<stdio.h>
#include<string.h>
int main(){
    char in[100]={""};
    char x[47]={'`','1','2','3','4','5','6','7','8','9','0','-','=','Q','W','E','R','T','Y','U','I','O','P','[',']','\\','A','S','D','F','G','H','J','K','L',';','\'','Z','X','C','V','B','N','M',',','.','/'};
    while(gets(in)){
        for(int i=0; i<strlen(in); i++){
            for(int j=0; j<47; j++){
                if(x[j]==in[i]){
                    in[i]=x[j-1];
                    break;
                }
            }
        }
        printf("%s\n", in);
    }
}