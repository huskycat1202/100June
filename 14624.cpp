#include<iostream>
using namespace std;
int n;
int main(){
    cin >> n;
    if(n%2==0){ cout << "I LOVE CBNU"; return 0;}
    else{
        for(int i=0; i<n; i++){
            cout << "*";
        }
        cout << "\n"; // 1번줄

        for(int i=n/2; i>0; i--){
            cout << " ";
        }
        cout << "*\n"; // 2번줄

        for(int i=1; i<=n/2; i++){
            for(int j=n/2-i; j>0; j--){
                cout << " ";
            }
            cout << "*";
            for(int j=1; j<i*2; j++){
                cout << " ";
            }
            cout << "*\n";
        }
    }
}
/*
1 2 1 3
2 1 3 4
3 0 5 5

1 3 1 4
2 2 3 5
3 1 5 6
4 0 7 7
*/