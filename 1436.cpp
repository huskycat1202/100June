#include<iostream>
using namespace std;
int main(){
    int n,num=666,cnt=0; cin >> n;
    while(1){
        if(cnt==n) break;
        int k=num,flag=0;;
        while(k>0){
            if(k%1000==666) flag=1; // 맨뒤 3자리가 666인가
            k/=10;
        }
        if(flag==1) cnt++;// 찾았습니다!
        num++;//다음 수로!
    }
    cout<<num-1;
}