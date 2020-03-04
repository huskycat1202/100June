#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int n,k;

string x;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    while(1){
        string ans[1001], org[1001];
        k=0;
        cin >> n;
        if(n!=0){
            for(int i=0; i<n; i++){
                cin >> ans[i];
                org[i]=ans[i];
                for(int j=0; ans[i][j]!='\0'; j++){
                    if(ans[i][j]<97) ans[i][j]+=32;
                }
            }
            x=ans[0];
            for(int i=1; i<n; i++){
                if(x>ans[i]){x=ans[i]; k=i;}
            }
            cout << org[k] << "\n";
        }
        else return 0;
    }    
}