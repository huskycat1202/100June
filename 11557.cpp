#include<iostream>
#include<string>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string name,ans="";
        int num,max=0;
        while(n--){
            cin >> name >> num;
            if(num>max){max=num; ans=name;}
        }
        cout << ans << '\n';
    }
}