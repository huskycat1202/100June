#include<iostream>
using namespace std;
int main(){
	int t,h,w,n; // �� ȣ ���° 
	int a,b; 
	cin >> t;
	while(t--){
		cin >> h >> w >> n;
		if(n%h==0){
			if(n/h<10) cout << h << "0" << n/h;
			else cout << h << n/h;
		}
		else{
			a=(n/h)+1; // ȣ  
			b=n%h; // �� 
			if(a<10) cout << b << "0" << a;
			else cout << b << a;
		}
	}
}
