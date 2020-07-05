#include<iostream>
using namespace std;
int main(){
    int m; cin >> m;
    int r[1002]={};
    int d=0;
    for(int i=0; i<=m; i++){
        int a,b,c; cin >> a >> b >> c;
        d+=c;
        if(i==0) r[0]=a, r[1]=b, i++;
        else if(r[i-1]==a) r[i]=b;
        else if(r[i-1]>a) r[i]=(r[i-1]/a)*b;
        else r[i]=b/(a/r[i-1]);
    }
    cout << d%2 << " " << r[m];
}