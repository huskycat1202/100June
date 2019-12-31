#include<iostream>
#include<string>
using namespace std;
int main(){
	string a, b;
	cin >> a >> b;
	long long A=0,B=0;
	for(int i=0; i<a.length(); i++){
		A+=a[i]-'0';
	}
	for(int i=0; i<b.length(); i++){
		B+=b[i]-'0';
	}
	cout << A*B;
}
