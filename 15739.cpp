#include<iostream>
using namespace std;
int main(){
    int n,x=0,k=0; cin >> n;
    int ans=n*(n*n+1)/2;
    int num[101]={};
    int m[101][101];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> m[i][j];
            num[m[i][j]]++; // 입력횟수=> 중복 여부
            k+=m[i][j]; // 총합=> 범위 내 수 여부
            x+=m[i][j];
        }
        if(x!=ans){
            cout << "FALSE";
            return 0;
        }
        x=0;
    }
    // 가로
    for(int i=1; i<=n; i++){
        if(num[i]>1 || k!=ans*n){
            cout << "FALSE";
            return 0;
        }
    }
    
    for(int j=0; j<n; j++){
        for(int i=0; i<n; i++){
            x+=m[i][j];
        }
        if(x!=ans){
            cout << "FALSE";
            return 0;
        }
        x=0;
    }
    // 세로
    for(int i=0; i<n; i++){
        x+=m[i][i];
    }
    if(x!=ans){
        cout << "FALSE";
        return 0;
    }
    x=0;
    // \ 대각선
    for(int i=0; i<n; i++){
        x+=m[i][n-i-1];
    }
    if(x!=ans){
        cout << "FALSE";
        return 0;
    }
    // / 대각선
    
    cout << "TRUE";
}