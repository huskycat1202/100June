#include<iostream>
#include<string>
using namespace std;

int main(){
    string x[5]={};
    bool visit[5]={};
    bool exist = true;
    
    for(int i=0; i<5; i++){
        cin >> x[i];
        for(int j=2; j<x[i].length(); j++){
            if(x[i][j-2]=='F' && x[i][j-1]=='B' && x[i][j]=='I'){
                visit[i]=true;
                exist = false;
            }
        }
    }
    if(exist == true){
            cout << "HE GOT AWAY!";
    }
    else{
        for(int i=0; i<5; i++){
            if(visit[i]) cout<<i+1<<' ';
        }
    }
}
