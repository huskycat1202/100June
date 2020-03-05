#include<iostream>
#include<string>
#include<deque>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t,n;
    cin >> t;
    while(t--){
        string p,x;
        bool fb=true, flag=false; // f
        deque <int> dq;
        int num[100001]={};
        cin >> p >> n >> x;
        int k=0;
        for(int i=1; x[i]!=']'; i++){
            if(x[i]!=',' ) num[k]=num[k]*10+(x[i]-'0');
            if(x[i]==',' || x[i+1]==']') {dq.push_back(num[k]); k++;}
        }
        for(int i=0; p[i]!='\0'; i++){
            if(p[i]=='D'){
                if(!dq.empty()){
                    if(fb==true) dq.pop_front();
                    else dq.pop_back();
                }
                else {cout << "error" << "\n"; flag=true; break;}
            }
            else{fb==true?fb=false:fb=true;}
            
        }
        if(flag) continue;
        cout << '[';
        if(dq.size()!=0){
            if(fb==true){
                for(int i=0; i<dq.size()-1; i++){
                    cout << dq.at(i) << ',';
                }
                cout << dq.back();
            }
            else{
                for(int i=dq.size()-1; i>=1; i--){
                    cout << dq.at(i) << ',';
                }
                cout << dq.front();
            }
        }
        cout << "]\n";
    }
}