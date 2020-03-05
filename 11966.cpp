#include<iostream>
using namespace std;
long long int n;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    cin >> n;
    while(1){
        if(n%2==0) n/=2;
        else if(n==1) {cout << 1; return 0;}
        else {cout << 0; return 0;}
    }
}