#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n,q; cin >> n >> q;
    int a[300001]={},b[300001]={};
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    b[0]=a[0];
    for(int i=1; i<n; i++){
        b[i]=b[i-1]+a[i];
    }
    while(q--){
        int l,r; cin >> l >> r;
        cout << b[r-1]-b[l-2]<< '\n';
    }
}