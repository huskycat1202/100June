#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long int n,x; cin >> n;
    for(int i=1; ; i++){
        if(10<n){
            if(n%10>4) n=(n/10+1);
            else n=(n/10);
        }
        else{
            x=i;
            break;
        }
    }
    cout << n;
    for(int i=0; i<x-1; i++){
        cout << "0";
    }
}