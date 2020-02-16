#include<iostream>
using namespace std;
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
	long long int n; cin >> n;
	while(1){
		for(int i=2; ; i++){
			if(n%i==0){
				n/=i; cout << i << "\n"; i--;
			}
			else continue;
			if(n==1) return 0;
		}
	} 
}

