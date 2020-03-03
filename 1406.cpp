#include<iostream>
#include<stack>
#include<string>
using namespace std;
stack <char> l;
stack <char> r;
string L,R;
char k,s;
int m;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> L;
    for(int i=0; L[i]!='\0'; i++){
        l.push(L[i]);
    }
    L="";
    cin >> m;
    while(m--){
        cin >> k;
        if(k=='P'){cin >> s; l.push(s);}
        else if(k=='L' && !l.empty()){s=l.top(); l.pop(); r.push(s);}
        else if(k=='D' && !r.empty()){s=r.top(); r.pop(); l.push(s);}
        else if(k=='B' && !l.empty()){l.pop();}
    }
    while(!l.empty()){
        s=l.top();
        L+=s;
        l.pop();
    }
    for(int i=L.size()-1; i>=0; i--){
        cout << L[i];
    }
    while(!r.empty()){
        cout << r.top();
        r.pop();
    }
}