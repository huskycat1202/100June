#include<iostream>
using namespace std;
int main(){
    int a[9]={}, b[9]={};
    int A=0, B=0,ans=0;
    for(int i=0; i<9; i++){
        cin >> a[i];
    }
    for(int i=0; i<9; i++){
        cin >> b[i];
    }
    for(int i=0; i<18; i++){
        if(i%2==0){
            A+=a[i/2];
            if(A>B && ans==0) ans++;
        }
        else{
            B+=b[i/2];
            if(A<B && ans==1) ans++;
        }
    }
    if(ans==2) cout << "Yes";
    else cout << "No";
}