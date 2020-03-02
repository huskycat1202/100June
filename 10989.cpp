#include<iostream>
using namespace std;
int n, x, cnt[10001]={};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        cnt[x]++;
    }

    for(int i=0; i!=10001; i++){
        if(cnt[i]>0){
            for(int j=0; j<cnt[i]; j++){
                cout << i << "\n";
            }
        }
    }
}