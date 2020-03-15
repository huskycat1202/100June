#include<iostream>
#include<deque>
using namespace std;
int a,b;
int main(){
    cin >> a >> b;
    deque <int> dq;
    int sum=0;
    for(int i=1; i<=b; i++){
        for(int j=0; j<i; j++){
            dq.push_back(i);
        }
    }
    for(int i=a-1; i<b; i++){}
        sum+=dq.at(i);
    }
    cout << sum;
}
/*
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
1 2 2 3 3 3 4 4 4 4  5  5  5  5  5
*/