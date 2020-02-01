#include<iostream>
using namespace std;
int main(){
	string s,t;
	cin >> s >> t;
	int a=t.length();
	int b=s.length();
	string S,T;
	while(a--){
		S+=s;
	}
	while(b--){
		T+=t;
	}
	for(int i=0; S[i]!='\0'; i++){
		if(S[i]!=T[i]){
			cout << 0;
			return 0;
		}
	}
	cout << 1;
}
