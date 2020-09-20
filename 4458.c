#include<stdio.h>
#include<string.h>
int main(){
    int a;
    scanf("%d",&a);
    getchar();
    for (int i = 0; i < a; i++){
        char arr[31];
        gets(arr);
        
        printf("%s\n",arr);
    }
}