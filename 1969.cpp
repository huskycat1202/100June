#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    int a=0, t=0, g=0,c=0,ans=0;
    string x[1001];
    for(int i=0 ; i<n; i++){
        cin >> x[i];
    }
    for(int j=0; j<m; j++){   
        for(int i=0; i<n; i++){
            if(x[i][j]=='A') a++;
            else if(x[i][j]=='T') t++;
            else if(x[i][j]=='G') g++;
            else c++;
        }
        if(max(a,max(c,max(g,t)))==a){
            cout << 'A';
            ans+=n-a;
        }
        else if(max(a,max(c,max(g,t)))==c){
            cout << 'C';
            ans+=n-c;
        }
        else if(max(a,max(c,max(g,t)))==g){
            cout << 'G';
            ans+=n-g;
        }
        else{
            cout << 'T';
            ans+=n-t;
        }
        a=0, c=0, g=0, t=0;
    }  
    cout << '\n' << ans;
}