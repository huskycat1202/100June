#include<stdio.h>
int main(){
   int arr[31]={};
   int i,j;
   for(i=1; i<=28; i++){
      scanf("%d", &j);
      arr[j]=1;
   }
   for(i=1; i<=30; i++){
      if(arr[i]==0){
         printf("%d\n", i);
      }
   }
}