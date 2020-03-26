#include<iostream>
#include<string>
using namespace std;
int main(){
    int n; cin >> n;
    int possi[988]={};
    for(int i=123; i<=987; i++){
        string all=to_string(i);
        if(all[0]==all[1]||all[1]==all[2]||all[2]==all[0]){possi[i]=1;} // 중복
        if(all[0]-'0'==0 ||all[1]-'0'==0 ||all[2]-'0'==0){possi[i]=1;} // 0 불가 
    }
    while(n--){
        int q,strike,ball;
        cin >> q >> strike >> ball;
        string num = to_string(q);
        for(int i=123; i<=987; i++){
            int s=0,b=0;
            string all=to_string(i);
            for(int j=0; j<3; j++){
                for(int k=0; k<3; k++){
                    if(all[j]==num[k] && k==j) s++;
                    else if(all[j]==num[k] && k!=j) b++;
                }
            }
            if(strike!=s || ball!=b) possi[i]=1;
        }
    }
    int cnt=0;
    for(int i=123; i<=987; i++){
        if(possi[i]==0) cnt++;
    }
    cout << cnt;
}

/*
4
1 2 3 1 1
3 5 6 1 0
3 2 7 2 0
4 8 9 0 1
*/