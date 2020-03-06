#include<iostream>
#include<set>
#include<string>
using namespace std;
int t, n;
string x;

int main(){
    set <string> s;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> x;
            s.insert(x);
        }
        cout << s.size() << "\n";
        s.clear();
    }
}