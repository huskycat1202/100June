#include<iostream>
using namespace std;
long long int t,n,m,sum=1;
int fac(int x){
    if(x==0) return 1;
    for(int i=1; i<=x; i++){
        sum*=i;
    }
    return sum;
    sum=0;
}
int ans(int a, int b){
    for(int i=a; i>=1)
    return fac(a)/fac(a-b+1);
}
int main(){
    cin >> t;
    while(t--){
        cin >> n >> m;
        cout << C(m,n) << "\n";
    }
}