#include<iostream>
using namespace std;
int n,ans=1;
int dp[1001]={1,1};

int main(){
    cin >> n;
    for(int i=2; i<=n; i++){
        dp[i]=(dp[i-1]+dp[i-2])%10007;
    }
    cout<<dp[n];
}