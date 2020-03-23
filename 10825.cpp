#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	string x;
	vector< pair< int, pair< int, pair< int, string> > > > v;
	for(int i=0; i<n; i++){
		int k, e, m;
		cin >> x >> k >> e >> m;
		v.push_back({-k,{e,{-m,x}}});
	}
	sort(v.begin(), v.end());
	for(int i=0; i<n; i++){
		cout << v[i].second.second.second << "\n";
	}
}
