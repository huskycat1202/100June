#include<iostream>
using namespace std;

int main(){
   int t, n, c;
   float g;
   int sum1=0;
   float sum2=0;
   scanf("%d", &t);
   while(t--){
      scanf("%d", &n);
      for(int i=0; i<n; i++){
         scanf("%d", &c);
         sum1 += c;
         scanf("%f", &g);
         g *= c;
         sum2 += g;
      }
      printf("%d ", sum1);
      printf("%.1f\n",sum2/sum1);
      sum1=0; sum2=0;
   }
}
