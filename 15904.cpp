#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string x; getline(cin,x);
    int t=0;
    for(int i=0; i<x.length(); i++){
        if(t==0 && x[i]=='U') t++;
        else if(t==1 && x[i]=='C') t++;
        else if(t==2 && x[i]=='P') t++;
        else if(t==3 && x[i]=='C'){
            cout << "I love UCPC";
            return 0;
        }
    }
    cout << "I hate UCPC";
}