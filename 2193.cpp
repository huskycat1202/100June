#include<iostream>
using namespace std;
long long int n, x[91]={};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);    
    cin >> n;
    x[1]=1,x[2]=1;
    for(int i=3; i<=n; i++){
        x[i]=x[i-1]+x[i-2];
    }
    cout << x[n];
}