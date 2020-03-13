#include<iostream>
#include<algorithm>
using namespace std;
int x[3]={};
int main(){
    cin >> x[0] >> x[1] >> x[2];
    sort(x,x+3);
    for(int i=0; i<3; i++){
        cout << x[i] << " ";
    }
}