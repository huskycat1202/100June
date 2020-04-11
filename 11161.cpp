#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int now=0, begin=0;
        while(n--){
            int in1,in2; cin>>in1>>in2;
            now += in1; now -= in2;
            if(now<0){
                begin+= -now;
                now=0;
            }
        }
        cout<<begin<<'\n';
    }
}