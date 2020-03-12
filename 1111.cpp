#include<iostream>
using namespace std;
int n,a[51]={},b[51]={},x[51]={};
int main(){
    cin >> n;
    if(n==1) {cout << "A"; return 0;} // 확답 찾기 불가능
    for(int i=0; i<n; i++){
        cin >> x[i];
    }
    if(n==2){
        if(x[0]==x[1]) cout<<x[0];
        else cout<<'A';
        return 0;
    }

    for(int i=2; i<n; i++){ // 다 다를 때
        if(x[i-1]-x[i-2]==0) a[i]=0;
        else if((x[i]-x[i-1])%(x[i-1]-x[i-2])!=0) {cout << "B"; return 0;} // a 소수면 노답
        else {
            a[i]=(x[i]-x[i-1])/(x[i-1]-x[i-2]);
        }
        b[i]=x[i]-x[i-1]*a[i];
        if(x[i-2]*a[i]+b[i]!=x[i-1] || x[i-1]*a[i]+b[i]!=x[i]){cout << "B"; return 0;}
        if(i>2 && (a[i]!=a[i-1] || b[i]!=b[i-1] || x[i-3]*a[i]+b[i]!=x[i-2])){cout << "B"; return 0;}
        if(i<n-1 && x[i]*a[i]+b[i]!=x[i+1]){cout << "B"; return 0;}
    }
    cout << x[n-1]*a[2]+b[2]; return 0;
}