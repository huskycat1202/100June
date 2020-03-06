#include<iostream>
using namespace std;
int t,n,zero=0,one=0;

int fibonacci(int n) {
    if (n == 0) {
        zero++;
        return 0;
    } else if (n == 1) {
        one++;
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
    cin >> t;
    while(t--){
        cin >> n;
        zero=0, one=0;
        fibonacci(n);
        cout << zero << " " << one << "\n";
    }
}