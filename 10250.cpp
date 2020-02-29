#include<iostream>
using namespace std;
int main(){
	int t,h,w,n; // Ãþ È£ ¸î¹øÂ° 
	int a,b; 
	cin >> t;
	while(t--){
		cin >> h >> w >> n;
		if(n%h==0){
			if(n/h<10) cout << h << "0" << n/h;
			else cout << h << n/h;
		}
		else{
			a=(n/h)+1; // È£  
			b=n%h; // Ãþ 
			if(a<10) cout << b << "0" << a;
			else cout << b<< a;
		}
	}
}
