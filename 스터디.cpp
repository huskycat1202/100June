 #include<stdio.h>

int main(){
    int div_num, num=1;
    scanf("%d", &div_num);
    while(1){
        scanf("%d", &num);
        if (num==0){
            break;
        }
        if(num%div_num==0){
            printf("%d is a multiple of %d.",num, div_num);    
        }
        else{
            printf("%d is NOT a multiple of %d.",num, div_num);
        }
    }
} 