#include <iostream>
#include <string>
using namespace std;
int main(){
    long long int a,b,ans; cin >> a >> b;
    if(b>a){
      int x = a;
      a = b;
      b = x; //a>=b
    }
    if(a>0){
      if(b>0) ans = a*(a+1)/2 - b*(b-1)/2;
      else ans = a*(a+1)/2 - b*(b-1)/2;
    }
    else{ //a<0
      ans = -b*(b-1)/2 + a*(a+1)/2;
    }
    cout << ans;
}