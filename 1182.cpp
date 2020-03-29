#include<iostream>
using namespace std;
int n,s,x[20]={},cnt=0;

void add(bool check, int sum, int now){
    if(now==n){
        if(check && sum==s) cnt++;
        return ;
    }
    add(true,sum+x[now],now+1);
    add(check,sum,now+1);
   
}
int main(){
    cin >> n >> s;
    for(int i=0; i<n; i++){
        cin >> x[i]; // -7 -3 -2 5 8
    }
    add(false,0,0);
    cout << cnt;
}