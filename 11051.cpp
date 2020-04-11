#include<iostream>
using namespace std;
int main(){
    int n,k; cin >> n >> k;
    long long int x[1001][1001]={};
    if(k==0 || n==k) {cout << 1; return 0;}
    if(n/2<k) k=n-k;
    for(int i=1; i<=n; i++){
        x[i][1]=i;
        x[i][i]=1;
    }
    for(int i=2; i<=n; i++){
        for(int j=2; j<=k; j++){
            x[i][j]=x[i-1][j-1]+x[i-1][j];
            x[i][j]%=10007;
        }
    }
    cout << x[n][k];
}