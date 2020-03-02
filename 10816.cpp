#include<iostream>
using namespace std;
int main(){
    int n,m,N[500001]={},M[500001]={},ans[500001]={};
    cin >>n;
    for(int i=0; i<n; i++){
        cin >> N[i];
    }
    sort(N,N+n);
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> M[i];
    }
    sort(M,M+m);

    for(int i=0; i<m; i++){
        if(N[n/2]==M[i]) ans[i]++;
        else if(N[n/2]<M[i])
        for(int j=0; j<n; j++){
            if(N[j]==M[i]) ans[i]++;
        }
    }
    for(int i=0; i<m; i++){
        cout << ans[i] << " ";
    }
}