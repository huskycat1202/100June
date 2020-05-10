#include<iostream>
using namespace std;
int main(){
    int n,ans=0; cin >>n;
    for(int i=223; i>=1; i--){
        if(i*i>n)continue;
        else{
            n-=i*i;
            ans++;
            i++;
        }
    }
    cout << ans;
}