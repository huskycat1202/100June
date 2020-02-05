#include<iostream>
using namespace std;
int main(){
	string x[101];
	for(int i=0; ; i++){
		cin >> x[i];
		if(x[i][1]!='a'){
			for(int j=0; j<x[i].length(); j+=i+2){
				cout << x[i][j];
			}
			cout << "\n";
		}
		else return 0;
	}
}
