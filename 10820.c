#include<stdio.h>
#include<string.h>
int main(){
    char x[102];
    int min=0, max=0, num=0, blk=0;
    // fgets(저장할 char 배열, 읽어들일 최대 문자 수, 문자열 읽을 파일포인터(지금은 표준입력이니 stdin) )
    // 102-1=101개의 문자를 입력 받을 때까지, EndOfFile 도달할 때 까지 입력 받음
    // 띄어쓰기 입력 가능!
    while(fgets(x, 102, stdin)){
        for(int i=0; x[i]!='\0'; i++){
            if(x[i]>='a' && x[i]<='z') min++;
            else if(x[i]>='A' && x[i]<='Z') max++;
            else if(x[i]>='0' && x[i]<='9') num++;
            else blk++;
        }
        if(min==0 && max==0 && num==0 && blk==1) return 0;
        else{
            printf("%d %d %d %d\n", min, max, num, blk-1);
            min=0, max=0, num=0, blk=0;
        }
    }
}