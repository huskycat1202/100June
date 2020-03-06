#include<iostream>
#include<cmath>
using namespace std;
int t,a,b,Min,Max;
int main(){
    cin >> t;
    while(t--){
        cin >> a >> b;
        Min=min(a,b), Max=max(a,b);
        for(int i=1; ; i++){
            if((i*Max)%Min==0) {cout << i*Max << "\n"; break;}
        }
    }
}