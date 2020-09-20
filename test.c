#include <stdio.h>
#include <string.h>

int main(){
   char a[11];
   int c=0;
   int d[5]={};
   int x=0;

   for(int i=0; i<5; i++){
       scanf("%s", a);
       int b=strlen(a);

       for(int y=0; y<b-2; y++){
           if(a[y]=='F'){
               if(a[y+1]=='B' && a[y+2]=='I'){
                   d[i]=1;
                   x=x+1;
               }
           }
       }
   }

   for(int e=0; e<5; e++){
       if(d[e]==1){
           printf("%d ", e+1);
       }
   }

   if(x==0){
       printf("HE GOT AWAY!");
   }
}