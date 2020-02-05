#include<iostream>
using namespace std;
int main(){
	int x;
	cin >> x;
	if(x==1) cout << "1/1";
	int a=0, b=1;
	for(int i=0; ; i++){
		if(a<x && x<=b){
			if(i%2==0)
			cout << b-x+1 << "/" << x+i-b+1;
			else cout << x-a << "/" << i+a-x+2;
			return 0;
		}
		else{
			int t=b;
			b+=i+2;
			a=t;
		}
	}
}
