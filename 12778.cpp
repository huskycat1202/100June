#include<iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int m; char x; cin >> m >> x;
        if(x=='C'){
            while(m--){
                char c; cin >> c; cout << c+'0'-112 << " ";
            }
        }
        else{
            while(m--){
                int n; cin >> n; cout << char(n+112-'0') << " ";
            }
        }
        cout << '\n';
    }
}