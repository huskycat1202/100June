#include<iostream>
using namespace std;
int m,n,o=0,z=0,mi=0;
int u[1000][1000]={};
int main(){
    cin >> m >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> u[i][j];
            if(u[i][j]==1){
                o++;
            }
            else if (u[i][j]==0){
                z++;
            }
            else{//-1
                mi++;
            }
        }
    }
    if(z==0){cout 0; return 0;}
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(u[i][j]>0){
                if()
            }
        }
    }

}