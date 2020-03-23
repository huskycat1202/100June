#include<iostream>
using namespace std;
int fibo[51]={1,1};
int main(){
    int n;
    cin >> n;
    for(int i=2; i<=n; i++){
        fibo[i]=(fibo[i-1]+fibo[i-2]+1)%1000000007;
    }
    cout << fibo[n];
}