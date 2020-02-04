#include<iostream>
using namespace std;
int main(){
	int n, hight=0, h=0;   
	int x[1001]={};
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> x[i];
	}
	for(int i=0; i<n-1; i++){
		if(x[i]<x[i+1]){
			hight+=x[i+1]-x[i];
		}
		else hight=0;
		
		if(h<hight){
			h=hight;
			hight=0;
		}
	}
	cout << h;
}
// 12 20 1 3 4 4 11 1
//   8     3    7
