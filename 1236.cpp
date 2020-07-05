#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    int n,m,N=0,M=0; cin >> n >> m;
    string x[51];
    for(int i=0; i<n; i++){
        cin >> x[i];
        for(int j=0; j<m; j++){
            if(x[i][j]=='X'){
                N++;
                break;
            }
        }
    }
    for(int j=0; j<m; j++){
        for(int i=0; i<n; i++){
            if(x[i][j]=='X'){
                M++;
                break;
            }
        }
    }
    cout << max(n-N,m-M);
}