#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n; cin >> n;
    int u[1000]={};
    for(int i=0; i<n; i++){
        cin >> u[i];
    }
    sort(u,u+n);
    for(int i=n-1; i>=0; i--){
        int x=u[i],cnt=0;
        for(int j=i-1; j>=0; j--){
            if(x>=u[j]) {x-=u[j]; j++; cnt++;}
            if(x==0 && cnt==3) {cout << u[i]; return 0;}
        }
    }
}