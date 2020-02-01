#include<iostream>
using namespace std;
int main(){
   int n,k,x,count=0;
   int list[1001] = {}; 
   cin >> n >> k;
   
   for(int x=2; x<1000; x++){
      for(int i=x; i<=n; i+=x){
         if(list[i-2]!=1){
            list[i-2]=1;
            count++;
            if(count==k) {cout<<i; return 0;}
      }
   }
}
}

/*
2 3 4 5 6 7 8 9 10
2 4 6 8 10 3 9
*/
