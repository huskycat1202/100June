#include<iostream>
using namespace std;
int e,s,m,y=0,a,b,c;
int main(){
    cin >> e >> s >> m;
    while(1){
        a=y%15, b=y%28, c=y%19;
        if(a==e-1 && b==s-1 && c==m-1) break;
        y++;
    }
    cout << y+1;
}