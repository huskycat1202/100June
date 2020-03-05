#include<iostream>
using namespace std;
long long int n,pibbo[117]={};
int main(){
    cin >> n;
    pibbo[1]=1,pibbo[2]=1,pibbo[3]=1;
    for(int i=4; i<=n; i++){
        pibbo[i]=pibbo[i-1]+pibbo[i-3];
    }
    cout << pibbo[n];
}