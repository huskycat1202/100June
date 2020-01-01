#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	string x;
	cin >> x;
	sort(x.begin(),x.end());
	reverse(x.begin(),x.end());
	for(int i=0; i<x.length(); i++){
		cout << x[i];
	}
}
