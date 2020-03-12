#include<iostream>
using namespace std;
long long int x, y, z, ans;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> x >> y;
    ans=y*100/x;
    z=ans;
    if(x==y || ans==99) {cout << "-1"; return 0;}
    int count=0;
    while(ans==z){
        count+=100;
        z=(y+=100)*100/(x+=100);
    }
    while(ans!=z){
        count-=1;
        z=(--y)*100/(--x);
    }
    cout<<++count;
}