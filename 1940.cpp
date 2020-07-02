#include<iostream>
using namespace std;
int main(){
    long long int n,m,ans=0,x[15001]={}; cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> x[i];
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(x[i]+x[j]==m){
                ans++;
                break;
            }
        }
    }
    cout << ans;
}