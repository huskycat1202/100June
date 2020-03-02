#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,a,b; cin >> n;
    vector <pair <int,int> > v;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        v.push_back(pair(a,b));
    }
    sort(v.end(),v.begin());
        

}
/*
7 620
5 420
5 390
4 510
4 500
4 340
2 420
*/