#include<iostream>
using namespace std;
int main(){
	int m, n, sum=0; cin >> m >> n;
	int list[10002]={};
	for(int x=2; x<=n; x++){
		for(int i=x+x; i<=n; i+=x){
			if(list[i]!=1){
				list[i]=1;
			}
		}
	}
	list[1]=1;
	int i=0, ans[10002]={}, answer=0;
	for(int x=m; x<=n; x++){
		if(list[x]==0){
			ans[i]=x;
			answer+=ans[i];
			i++;
		}
	}
	if(ans[0]!=0){
		cout << answer << "\n" << ans[0];
	}
	else cout << -1;
}
