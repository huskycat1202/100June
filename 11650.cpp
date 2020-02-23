#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int n,point[100000][2]={}; cin >> n;
	vector < pair<int,int> > v;
	for(int i=0; i<n; i++){
		cin >> point[i][0] >> point[i][1];
		v.push_back(make_pair(point[i][0],point[i][1]));
	}
	sort(v.begin(),v.end());
	for(int i=0; i<n; i++){
		cout << v[i].first << " " << v[i].second << "\n";
	}
}
