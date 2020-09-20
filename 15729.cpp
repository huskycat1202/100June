#include<iostream>
using namespace std;
int main(){
    int n,ans=0; int x[1000001]={}, y[1000001]={}; cin >> n;
    for(int i=0; i<n; i++){
        cin >> x[i];
    }
    for(int i=n-1; i>=0; i--){
        if(x[i]!=y[i]){
            x[i]=(x[i]+1)%2;
            if(i<n-1) x[i+1]=(x[i+1]+1)%2;
            if(i<n) x[i+2]=(x[i+2]+1)%2;
            ans++;
        }
    }
    cout << ans;
}