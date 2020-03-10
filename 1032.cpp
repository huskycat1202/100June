#include<iostream>
using namespace std;
int n;
string x[51];
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x[i];
    }
    int X=x[0].size();
    int count=0,ans=0;
    for(int i=0; i<X; i++){
        for(int j=1; j<n; j++){
            if(x[0][i]==x[j][i]) count++;
        }
        if(count==n-1) cout << x[0][i];
        else cout << "?";
        count=0;
    }
}
