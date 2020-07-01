#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n; cin >> n;
    int ans=4;
    for(int i=0; i<n; i++){
        ans+=pow(2,i)*(3*pow(2,i)+2);
    }
    cout << ans;
}