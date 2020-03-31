#include<iostream>
#include<string>
using namespace std;
int main(){
    int l, c; cin >> l >> c;
    string C, aeiou;
    for(int i=0; i<c; i++){
        cin >> C[i];
        if(C[i]=='a' || C[i]=='e' || C[i]=='i' || C[i]=='o' || C[i]=='u'){
            aeiou.append(C[i]);
        }
    }

}