#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int fibo[1000001]={0,1,2};
    for(int i=3; i<=n; i++){
        fibo[i]=(fibo[i-1]+fibo[i-2])%15746;
    }
    cout<<fibo[n];
}