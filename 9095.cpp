#include<iostream>
using namespace std;
int main(){
    int t,n,x[11]={1,2,4}; cin >> t;
    while(t--){
        cin >> n;
        for(int i=3; i<n; i++){
            x[i]=x[i-1]+x[i-2]+x[i-3];
        }
        cout << x[n-1] << "\n";
    }
}