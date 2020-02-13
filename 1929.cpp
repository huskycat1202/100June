#include<iostream>
using namespace std;
int main(){
	int m,n; cin >> m >> n;
	int list[1000002]={};
	for(int x=2; x<=n; x++){
		for(int i=x+x; i<=n; i+=x){
			if(list[i]!=1){
				list[i]=1;
			}
		}
	}
	list[1]=1;
	int i=0, ans[1000002]={};
	for(int x=m; x<=n; x++){
		if(list[x]==0){
			ans[i]=x;
			i++;
		}
	}
	for(int i=0; ans[i]!=0; i++){
		cout << ans[i] << "\n";
	}
}
