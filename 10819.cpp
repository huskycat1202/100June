#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int n; cin >> n;
    int x[9]={};
    for(int i=0; i<n; i++){
        cin >> x[i];
    }
    sort(x,x+n);
    int sum=0, ans=0;
    for(int i=0; i<n-1; i++){
        ans+=abs(x[i]-x[i+1]);
    }
    while(next_permutation(x,x+n)){
        for(int i=0; i<n-1; i++){
            sum+=abs(x[i]-x[i+1]);
        }
        if(sum>ans)ans=sum;
        sum=0;
    }
    cout << ans;
}