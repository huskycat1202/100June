#include<iostream>
using namespace std;

int mola(int n){
	int sum = n;
	while(n){
		sum += n%10;
		n/=10;
	}
	return sum;
}

int main(){
	int n; cin >> n;
		for(int i=1; i<n; i++){
			if(mola(i)==n){
				cout<<i<<'\n'; return 0;
				}
		}
		cout <<0<<'\n'; 
}
