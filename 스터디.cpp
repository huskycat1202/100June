#include<stdio.h>

int main(){
   int N;
   scanf("%d", &N);
      for(int i=0; i<=N; i++){
      int P;
      for(int P=1; P<=i; P++){
         printf("*");
      }
      printf("\n");
   }
}