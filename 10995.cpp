#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int k=n/2;
	while(k--){
		for(int j=0; j<n; j++){
			cout << "* ";
		}
		cout << "\n";
		for(int j=0; j<n; j++){
			cout << " *";
		}
		cout <<"\n";
	}
	//cout << "\n";
	
	if(n%2==1){
		for(int j=0; j<n; j++){
			cout << "* ";
		}
	}
}
