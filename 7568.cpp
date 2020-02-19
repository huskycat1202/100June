#include<iostream>
using namespace std;
int main(){
	int n; cin >> n;
	int body[50][3]={};
	for(int i=0; i<n; i++){
		cin >> body[i][0] >> body[i][1];
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i!=j && body[i][0]>body[j][0] && body[i][1]>body[j][1]) body[j][2]++;
		}
	}
	for(int i=0; i<n-1; i++){
		cout << body[i][2]+1 << " ";
	}
	cout << body[n-1][2]+1;
}
