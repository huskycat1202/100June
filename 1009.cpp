#include<iostream>
using namespace std;

int main(){
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int ans=1;
        for(int i=0; i<m; i++){
            ans=(ans*n)%10;
            if(!ans) ans=10;
        }
        cout<<ans<<"\n";
    }
}
