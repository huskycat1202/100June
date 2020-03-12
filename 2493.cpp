#include<iostream>
#include<stack>
using namespace std;
int n,x;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t,c;//tower,caught
    stack <int> org; //orgin
    stack <int> b; //block
    stack <int> o; //order
    int ans[500001]={};
    
    cin >> n;// 5
    for(int i=0; i<n; i++){
        cin >> x;
        org.push(x);
    }
    // or: 6 9 5 7 4
    for(int i=0; i<n; i++){
        t=org.top();
        org.pop();
        // org 뒤에서부터 pop
        while(!b.empty() && b.top()<=t){
            b.pop(); 
            c=o.top();
            o.pop();
            ans[c]=n-i;
        }
        //
        b.push(t);
        o.push(n-i);
    }

    for(int i=1; i<=n; i++){
        cout << ans[i] << " ";
    }
    return 0;
}