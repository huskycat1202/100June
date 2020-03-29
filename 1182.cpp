#include<iostream>
using namespace std;
int main(){
    int n,s,x[20]={}; cin >> n >> s;
    for(int i=0; i<n; i++){
        cin >> x[i]; // -7 -3 -2 5 8
    }
    int sum=0,cnt=0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int _=i; _<=j; _++){
                sum+=x[_];
            }
            if(sum==s) cnt++;
            sum=0;
        }
    }
    while(next_permutation(x,x+n)){
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                for(int _=i; _<=j; _++){
                    sum+=x[_];
                }
                if(sum==s) cnt++;
                sum=0;
            }
        }
    }
    cout << cnt;
}