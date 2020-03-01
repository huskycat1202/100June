#include<iostream>
#include<stack>
using namespace std;
int main(){
    int k,x,i=0,sum=0,list[100001]={}; cin >> k;
    stack <int> s;
    for(int i=0; i<k; i++){
        cin >> x;
        if(x==0) s.pop();
        else s.push(x);
    }
    while(!s.empty()){
        list[i]=s.top();
        i++;
        s.pop();
    }
    for(int i=0; list[i]!=0; i++){
        sum+=list[i];
    }
    cout << sum;
}