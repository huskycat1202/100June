#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main(){
	string x, X1, X2, X3, str;
	cin >> x;
	vector < string > v;
	int len = x.length();
	for(int i=1; i<len; i++){
		for(int j=i+1; j<len; j++){
			X1 = x.substr(0,i);
			X2 = x.substr(i,j-i);
			X3 = x.substr(j,len-j);
			reverse(X1.begin(),X1.end());
			reverse(X2.begin(),X2.end());
			reverse(X3.begin(),X3.end());
			str = X1+X2+X3;
			v.push_back(str);
		}	
	}
	sort(v.begin(),v.end());
	cout << v[0];
}
