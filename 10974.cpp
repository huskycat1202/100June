#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, x[10001]={}; cin >> n;
    for(int i=1; i<=n; i++){
        x[i]=i;
        cout << x[i] << " ";
    }
    cout << "\n";
    while(next_permutation(x+1,x+n+1)){
        for(int i=1; i<=n; i++){
            cout << x[i] << " ";
        }
        cout << "\n";
    }
}