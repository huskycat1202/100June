#include<iostream>
using namespace std;
long long int n, x[500001]={},ans[500001]={};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> x[i];
    }
    for(int i=2; i<=n; i++){ // 등대
        for(int j=i-1; j>0; j--){ // 등대에서부터 왼쪽으로 쭈우욱
            if(x[i]<=x[j]) {ans[i]=j; break;}
        }
    }
    for(int i=1; i<=n; i++){
        cout << ans[i] << " ";
    }
}