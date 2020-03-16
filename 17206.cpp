#include<iostream>
using namespace std;
int t,x[80001]={},sum=0,n;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> t;
    for(int i=1; i<=80000; i++){
        if(i%3==0) x[i]=x[i-1]+3*(i/3);
        else if(i%7==0) x[i]=x[i-1]+7*(i/7);
        else x[i]=x[i-1];
    }
    for(int i=0; i<t; i++){
        cin >> n;
        cout << x[n] << "\n";
    }
}