#include<iostream>
using namespace std;
int t,n,zero[41]={1,0,1},one[41]={0,1,1};


int main(){

    for(int i=3; i<=40; i++){
        zero[i]=zero[i-1]+zero[i-2];
        one[i]=one[i-1]+one[i-2];
    }

    cin >> t;
    while(t--){
        cin >> n;
        cout << zero[n] << ' ' << one[n] << '\n';
    }
}