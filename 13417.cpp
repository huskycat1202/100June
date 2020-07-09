#include<iostream>
#include<string>
#include<algorithm>
#include<deque>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        char x[1001]; deque<char> dq;
        for(int i=0; i<n; i++){
            cin >> x[i];
        }
        dq.push_front(x[0]);
        for(int i=1; i<n; i++){
            if(dq.front()>=x[i]) dq.push_front(x[i]);
            else dq.push_back(x[i]);
        }
        for(int i=0; i<n; i++){
            cout << dq[i];
        }
        cout << '\n';
    }
}