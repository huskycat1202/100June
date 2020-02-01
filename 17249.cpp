#include<iostream>
using namespace std;
int main(){
	string x;
	int k=0,l,r;
	cin >> x;
	for(int i=0; x[i]!='\0'; i++){
		if(x[i]=='@'){
			k++;
		}
		if(x[i]==')'){
			l=k;
			k=0;
		}
	}
	r=k;
	cout << l << " " << r;
}
