#include<iostream>
using namespace std;
long long int t,n,m,bri[30][30]={};
int main(){
    cin >> t;
    for(int i=1; i<30; i++){
        bri[1][i]=i;
        bri[i][i]=1;
        
    }
    for(int i=2; i<30; i++){
        for(int j=3; j<30; j++){
            bri[i][j]=bri[i][j-1]+bri[i-1][j-1];
        }
    }
    while(t--){
        cin >> n >> m;
        cout << bri[n][m] << "\n";
    }
}