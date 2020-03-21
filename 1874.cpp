#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
	int n, memo[100000]={};
	stack <int> s;
	vector <string> v;
	cin >> n; // 8
	for(int i=0; i<n; i++){
		cin >> memo[i]; // 4 3 6 8 7 5 2 1
	}
	int i=1,k=0;
	while(i!=n+1){
		s.push(i); i++;
		v.push_back("+\n");
		while(!s.empty() && s.top()==memo[k]){s.pop(); v.push_back("-\n"); k++;}
		if(!s.empty() && s.top()!=memo[k] && i==n+1){cout << "NO"; return 0;}
	}
	for(int i=0; i<v.size(); i++){
		cout << v[i];
	}
}