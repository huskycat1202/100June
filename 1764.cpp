#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	int n, m, sum=0, k=0;
	string N[500000], M, K[500000];
	cin >> n >> m;
	for(int i=0; i<n; i++){
		cin >> N[i];
	}
	sort(N,N+n);
	for(int i=0; i<m; i++){
		cin >> M;
		if(binary_search(N,N+n,M)){
			K[k++]=M;
			sum++;
		}
	}

	sort(K, K+k);
	cout << sum << "\n";
	for(int i=0; i<k; i++){
		cout << K[i] << "\n";
	}
}
