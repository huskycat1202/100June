#include<iostream>
#include<algorithm>
#include<string>
#include<set>
using namespace std;
int main(){
	int n;
	cin >> n;
	string a,b;
	set<string,greater<string> > s;
	set<string> ::iterator iter;
	for(int i=0; i<n; i++){
		cin >> a >> b;
		if(b=="enter")	s.insert(a);
		else s.erase(a);
	}
	for(iter=s.begin(); iter!=s.end(); iter++){
		cout << *iter << "\n";
	}
}
