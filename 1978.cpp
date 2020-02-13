#include<iostream>
using namespace std;
int main(){
	int n, ans=0, sum=0;
	cin >> n;
	while(n--){
		int x;
		cin >> x;
		if(x==2) sum++;
		else if(x==1) continue;
		else{
			ans=0;
			for(int i=2; i<x; i++){
				if(x%i==0) ans=1;
			}
			if(ans==0) sum++;
		}
	}
	cout << sum;
}
