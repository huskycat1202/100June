#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	int A[100000]={};
	int m,B;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> A[i];
	}
	sort(A,A+n);
	
	cin >> m;
	for(int i=0; i<m; i++){
		cin >> B;
		int ans=0;
		if(binary_search(A,A+n,B)) ans=1;
		cout << ans << "\n";
		ans=0;
	}
}
