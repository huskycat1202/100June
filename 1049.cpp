#include<iostream>
#include<algorithm>
using namespace std;
int n,m,six[51]={},one[51]={},cost=0,ans;
int main(){
    cin >> n >> m;
    ans=100000;
    for(int i=0; i<m; i++){
        cin >> six[i] >> one[i];
    }
    sort(six,six+m), sort(one,one+m);
    cost=one[0]*n;
    if(cost>six[0]*(n/6)+one[0]*(n%6)) cost=six[0]*(n/6)+one[0]*(n%6);
    if(cost>six[0]*((n/6)+1)) cost=six[0]*(n/6+1);
    if(cost<ans) ans=cost;
    cout << ans;
}