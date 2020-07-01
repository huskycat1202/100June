#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int t; cin >> t;
    char tmp;
    cin.ignore();
    while(t--){
        string x; getline(cin,x);
        int p=0;
        for(int i=0; i<x.length(); i++){
            if(x[i+1]==' ' || i==x.length()-1){
                for(int j=p; j<=(i-p)/2+p; j++){
                    tmp=x[j]; x[j]=x[i+p-j]; x[i+p-j]=tmp; 
                }
                p=i+2;
            }
        }
        for(int i=0; i<x.length(); i++){
            cout << x[i];
        }
        cout << '\n';
    }
}