#include<iostream>
using namespace std;
int main(){
    int n,d; cin >> n >> d;
    int num=1,cnt=0;
    while(1){
        int k=num;
        while(k>0){
            if(k%10==d)cnt++;
            k/=10;
        }
        if(num==n) break;
        num++;
    }
    
    cout << cnt;
}