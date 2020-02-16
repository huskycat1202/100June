#include<iostream>
using namespace std;
int main(){
	int t; cin >> t;
	int list[10002]={};
	for(int x=2; x<=10002; x++){
		for(int i=x+x; i<=10002; i+=x){
			if(list[i]!=1){
				list[i]=1;
			}
		}
	}
	list[1]=1;
	while(t--){
		int n; cin >> n;
		for(int i=n/2; i>1; i--){
			if(list[i]==0 && list[n-i]==0) {
			cout << i << " " << n-i << "\n";
			break;
			}
		}
	}
}
