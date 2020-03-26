#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, x[10001]={}; cin >> n;
    for(int i=1; i<=n; i++){
        cin >> x[i];
    }
    if(!next_permutation(x+1,x+n+1)) cout << -1;
    else{
        for(int i=1; i<=n; i++){
            cout << x[i] << " ";
        }
    }
}