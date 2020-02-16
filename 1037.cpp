#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int k; cin >> k;
	int list[51]={};
	for(int i=0; i<k; i++){
		cin >> list[i];
	}
	sort(list,list+k);
	cout << list[0]*list[k-1];
}
