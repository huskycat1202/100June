#include<iostream>
#include<set>
using namespace std;
int n,x;
set<int> s;
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        s.insert(x);
    }
    set<int>::iterator it;
    for(it=s.begin(); it!=s.end(); it++){
	    cout<< *it << ' ';
    }
}