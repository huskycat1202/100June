#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	int n, len, sum=0;
	cin >> n;
	string x;
	for(int i=0; i<9; i++){
		if(pow(10,i)<=n && n<pow(10,i+1)){
			len=i;
		}
	}
	for(int j=1; j<len+1; j++){
		sum+=j*9*pow(10,j-1);
	}
	sum+=(len+1)*(n-pow(10,len)+1);
	cout << sum;
}
//100.000.000
