#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n; cin >> n;
    string ans; cin >> ans; // string 입력 조심!
    int a=0,b=0,g=0;
    for(int i=0; i<n; i++){
        if(i%3==0){
            if(ans[i]=='A') a++;
        }
        else if(i%3==1){
            if(ans[i]=='B') a++;
        }
        else{
            if(ans[i]=='C') a++;
        }
    }
    for(int i=0; i<n; i++){
        if(i%2==0){
            if(ans[i]=='B') b++;
        }
        else if(i%4==1){
            if(ans[i]=='A') b++;
        }
        else{
            if(ans[i]=='C') b++;
        }
    }
    for(int i=0; i<n; i++){
        if(i%6==0 || i%6==1){
            if(ans[i]=='C') g++;
        }
        else if(i%6==2 || i%6==3){
            if(ans[i]=='A') g++;
        }
        else{
            if(ans[i]=='B') g++;
        }
    }

    cout << max(a,(max(b,g))) << '\n';
    if(a==max(a,(max(b,g)))) cout << "Adrian" << '\n';
    if(b==max(a,(max(b,g)))) cout << "Bruno" << '\n';
    if(g==max(a,(max(b,g)))) cout << "Goran" << '\n';
}