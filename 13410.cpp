#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,k; cin >> n >> k;
    int ans=1; int X[10]={};
    for(int i=1; i<=k; i++){
        int x=n*i,a=0;
        if(x>9){
            while(x!=0){
                X[a]=x%10;
                a++;
                x/=10;
            }
            x=0;
            for(int j=0; j<a; j++){
                x+=X[j]*pow(10,a-j-1);
            }
        }
        if(ans<x) ans=x;
    }
    cout << ans;
}