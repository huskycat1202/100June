#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(string a, string b){
	if(a.size()!=b.size()) return a.size()<b.size();
	else return a<b;
}

int main(){
	int n; cin >> n; string word;
	vector <string> v;
	for(int i=0; i<n; i++){
		cin >> word;
		v.push_back(word);
	}
	
	sort(v.begin(),v.end(),compare);
	
	cout << v[0] << "\n";
	for(int i=0; i<v.size(); i++){
		if(i>0 && v[i]!=v[i-1]) cout << v[i] << "\n";
	}
}
