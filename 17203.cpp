#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n,q; cin >> n >> q;
    int a[1001]={0},b[1001]={0,0},c[1001]={0,0};
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    for(int i=2; i<=n; i++){
        b[i]=abs(a[i-1]-a[i]);
    }
    for(int i=2; i<=n; i++){
        c[i]=c[i-1]+b[i];
    }
    while(q--){
        int l,r; cin >> l >> r;
        if(l==r) cout << 0 << '\n';
        else{cout << c[r]-c[l]<< '\n';}
    }
}