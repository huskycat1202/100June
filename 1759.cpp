#include<iostream>
#include<string>
using namespace std;
int main(){
    int l, c; cin >> l >> c;
    string rest, aeiou;
    char x;
    for(int i=0; i<c; i++){
        cin >> x;
        if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u') aeiou.append(x);
        else rest.append(x);
    }
    for(int i=0; i<aeiou.length(); i++){

    }

}
/*
aeiou a i
rest  t c s w