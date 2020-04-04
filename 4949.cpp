#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){
    while(1){
        stack <char> s;
        int flag = 0;
        string x; getline(cin,x);
        if(x==".") return 0;
        for(int i=0; x[i]!='\0'; i++){
            if(x[i]=='(' || x[i]=='[') s.push(x[i]);
            else if(x[i]==')'){
                if(s.empty()) {cout << "no\n"; flag++; break;}
                else if(s.top()=='(') s.pop();
                else {cout << "no\n"; flag++; break;}
            }
            else if(x[i]==']'){
                if(s.empty()) {cout << "no\n"; flag++; break;}
                else if(s.top()=='[') s.pop();
                else {cout << "no\n"; flag++; break;}
            }
        }
        if(flag==0){
            if(s.empty()) cout << "yes\n";
            else cout << "no\n";
        }
        
    }
}