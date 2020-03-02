#include<iostream>
using namespace std;
int main(){
    int n,p[101]={},ans=0; cin >> n;
    for(int i=0; i<n; i++){
        cin >> p[i];
    }
    for(int i=n-1; i>0; i--){
        if(p[i]<=p[i-1]){
            ans+=p[i-1]-p[i]+1;
            p[i-1]=p[i]-1;
        }
    }
    cout << ans;
}