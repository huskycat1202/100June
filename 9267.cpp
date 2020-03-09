#include<iostream>
#include<cmath>
using namespace std;
long long int a,b,s,Min,Max,x,y;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> a >> b >> s;
    if(s==0){cout << "YES"; return 0;}
    if(a==0){
        if(b==0){ cout << "NO"; return 0;}
        else{
            if(s%b==0){ cout << "YES"; return 0;}
            else{cout<<"NO"; return 0;}
        }
    }
    if(b==0){
        if(a==0){ cout << "NO"; return 0;}
        else{
            if(s%a==0){ cout << "YES"; return 0;}
            else{cout<<"NO"; return 0;}
        }
    }
    if(a==b){
        if(s%a==0){cout << "YES"; return 0;}
        else{cout << "NO"; return 0;}
    }
    Min=min(a,b), Max=max(a,b);
    while(Min!=1){
        Max-=Min;
        if(Max==Min){
            if(s%Max==0){cout << "YES"; return 0;}
            else {cout << "NO"; return 0;}
        }

        x=min(Min,Max), y=max(Min,Max);
        Min=x,Max=y;
    }
    while(1){
    if(s/Max < s%Max){cout << "NO"; return 0;}
    else if(s/Max >= s%Max){cout << "YES"; return 0;}
    }
}