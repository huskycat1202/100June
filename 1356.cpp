#include<iostream>
#include<string>
using namespace std;
int main(){
	string n;
	cin >> n;
	int N=n.size();
	for(int i=1 ;i<N; i++){
		int a=1, b=1;
		for(int j=0; j<i; j++){
			a*=n[j]-'0';
		}
		for(int j=i; j<N; j++){
			b*=n[j]-'0';
		}
		if(a==b){
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}
