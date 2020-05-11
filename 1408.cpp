#include<iostream>
#include<string>
#define Z '0'
using namespace std;
string cal(string a, string b){
    string ans="00:00:00";
    int H,M,S;
    int h1=(a[0]-Z)*10+(a[1]-Z), m1=(a[3]-Z)*10+(a[4]-Z), s1=(a[6]-Z)*10+(a[7]-Z);
    int h2=(b[0]-Z)*10+(b[1]-Z), m2=(b[3]-Z)*10+(b[4]-Z), s2=(b[6]-Z)*10+(b[7]-Z);
    if(s2<s1){S=s2+60-s1, m2-=1;}
    else{S=s2-s1;}
    if(m2<m1){M=m2+60-m1, h2-=1;}
    else{M=m2-m1;}
    H=h2-h1;
    //calcul fin
    ans[0]=H/10+Z, ans[1]=H%10+Z, ans[2]=':';
    ans[3]=M/10+Z, ans[4]=M%10+Z, ans[5]=':';
    ans[6]=S/10+Z, ans[7]=S%10+Z;
    return ans;
}
int com(string a, string b){
    int h1=(a[0]-Z)*10+(a[1]-Z), m1=(a[3]-Z)*10+(a[4]-Z), s1=(a[6]-Z)*10+(a[7]-Z);
    int h2=(b[0]-Z)*10+(b[1]-Z), m2=(b[3]-Z)*10+(b[4]-Z), s2=(b[6]-Z)*10+(b[7]-Z);
    if(h1>h2) return 0; 
    else if(h1<h2) return 1; 
    else{
        if(m1>m2) return 0;
        else if(m1<m2) return 1;
        else{
            if(s1>s2) return 0;
            else return 1;
        }
    }
}
int main(){
    string a,b; cin >> a >> b;
    if(com(a,b)==1) cout << cal(a,b);
    else cout << cal(cal(b,a),"24:00:00");
}