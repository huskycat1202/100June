#include<iostream>
using namespace std;
int main(){
    int a1,a2,b1,b2,c1,c2;
    cin >>a1>>a2>>b1>>b2>>c1>>c2;
    if(a1==b1) cout << c1;
    else if(a1==c1) cout << b1;
    else cout << a1;
    cout << " ";
    if(a2==b2) cout << c2;
    else if(a2==c2) cout << b2;
    else cout << a2;
}