#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
string x,y;
int main(){
    cin >> x >> y;
    int X=x.size(), Y=y.size(), A=0;
    reverse(x.begin(),x.end()), reverse(y.begin(),y.end());
    for(int i=X-1; i>=0; i--){
        A+=pow(10,i)*(x[X-1-i]-'0');
    }
    for(int i=Y-1; i>=0; i--){
        A+=pow(10,i)*(y[Y-1-i]-'0');
    }
    if(A==0) {cout << "0"; return 0;}
    bool x=1;
    while(A!=0){
        if(A%10==0 && x==1){
            A/=10;
        }
        else{
            cout << A%10;
            A/=10;
            x=0;
        }
    }
}