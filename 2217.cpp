#include<iostream>
#include<algorithm>
using namespace std;
typedef long long int ll;
int main(){
	ll n,w[100001]={},sum=0; cin >> n;
	for(int i=0; i<n; i++){
		cin >> w[i];
	}
	sort(w,w+n);
	for(int i=0; i<n; i++){
		if(w[i]*(n-i)>sum) sum=w[i]*(n-i);		
	}
	cout << sum;
}
