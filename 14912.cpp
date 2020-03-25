#include<iostream>
using namespace std;
int main(){
    int n,d,sum=0; cin >> n >> d;
    cout << 1/10;
    for(int i=1; i<=n; i++){
        while(i!=0){
            if(i%10==d){sum++;}
            i/=10;
        }
    }
    cout << sum;
}