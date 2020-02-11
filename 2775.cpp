#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	int home[15][15]={};
	for(int i=1; i<=14; i++){
		home[0][i]=i;
	}
	for(int i=1; i<=14; i++){
		for(int j=1; j<=14; j++){
			home[i][j]=home[i-1][j]+home[i][j-1];
		}
	}
	for(int _=0; _<t; _++){
		int k,n; // kÃþnÈ£ 
		cin >> k >> n;
		cout << home[k][n] << "\n";
	}
}

