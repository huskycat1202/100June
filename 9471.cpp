#include<iostream>
using namespace std;
int main(){
	int p;
	cin >> p;
	while(p--){
		int n,m;
		cin >> n >> m;
		int f0=0, f1=1, x, ans=0;
		for(int i=1; ; i++){
			x=f0;
			f0=f1;
			f1=(x+f0)%m;
			ans++;
			if(f0%m==0 && f1==1){
				cout << n << " " << ans << "\n";
				break;
			}
		}
	}
}
