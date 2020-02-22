#include<iostream>
using namespace std;
typedef long long int lli;
int main(){
	lli a,b,ans=1; cin >> a >> b;
	while(1){
		if(b>a){
			if(b%10==3 || b%10==5 || b%10==7 || b%10==9) {
				cout << "-1";
				return 0;
			}
			else if(b%10==1){
				ans++;
				b=(b-1)/10;
			}
			else{
				ans++;
				b=b/2;
			}
		}	
		else if(a==b){
			cout << ans;
			return 0;
		}
		else{
			cout << "-1";
			return 0;
		}
	}
}
