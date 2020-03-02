#include<iostream>
#include<algorithm>
using namespace std;
int cnt[20000002]={},n,m,x;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    cin >>n;
    for(int i=0; i<n; i++){
        cin >> x;
        cnt[x+10000000]++;
    }
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> x;
        cout<< cnt[x+10000000] << " ";
    }
}