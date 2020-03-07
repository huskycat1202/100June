#include<iostream>
using namespace std;
int t,s,n,q,p,option=0;
int main(){
    cin >> t;
    while(t--){
        cin>> s >> n;
        for(int i=0; i<n; i++){
            cin >> q >> p;
            option+=q*p;
        }
        s+=option;
        cout << s << "\n";
        option=0;
    }
}