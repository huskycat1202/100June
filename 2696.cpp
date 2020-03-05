#include<iostream>
using namespace std;
int t,m,x[10000]={},n;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--){
        cin >> m;
        cout << m/2+1;
        for(int i=1; i<=m; i++){
            cin >> n;
            if(i==1) x[1]=n;
            else if(i==2 && n>x[1]) x[2]=n;
            else if(i==2 && n<=x[1]) x[2]=x[1], x[1]=n;
            else{
                for(int j=1; j<=m; j++){
                    if(n<x[j]) 
                    if(x[j]<=n && n<=x[j+1]) 
                }
            }
            for(int j=1; j<=i; j++){
                if(x[j]<x[i] && x[i]<x[j+1])
            }
            if(i%2==1){//odd num


            }
        }
    }
}