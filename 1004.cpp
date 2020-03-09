#include<iostream>
#include<cmath>
using namespace std;
int t,X1,Y1,X2,Y2,n,cx[51]={},cy[51]={},r[51]={},sum=0;

void way(int i, int x1, int y1, int x2, int y2){
    double far1=sqrt((int)(pow(x1-cx[i],2)+pow(y1-cy[i],2)));
    double far2=sqrt((int)(pow(x2-cx[i],2)+pow(y2-cy[i],2)));
    if((far1<=r[i] && far2>r[i]) || (far1>r[i] && far2<=r[i])){
        sum++;
    }
}
 
int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--){
        cin >> X1 >> Y1 >> X2 >> Y2 >> n; // (-5,1) (12,1)
        for(int i=0; i<n; i++){ // 7
            cin >> cx[i] >> cy[i] >> r[i];
            way(i,X1,Y1,X2,Y2);
        }
        cout << sum<<'\n';
        sum=0;
    }
}