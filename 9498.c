#include<stdio.h>
 int main(){
 	int x;
 	scanf("%d", &x);
 	if(90<=x && x<=100){
        printf("A");
    }
 	else if(80<=x){
        printf("B");
    }
 	else if(70<=x){
        printf("C");
    }
 	else if(60<=x){
        printf("D");
    }
	else{
        printf("F"); 
    }
}