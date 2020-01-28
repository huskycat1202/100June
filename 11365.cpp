#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	while(1){
		string x;
		getline(cin,x);
		int X=x.size();
		if(X==3 && x[0]=='E' && x[1]=='N' && x[2]=='D') break;
		reverse(x.begin(),x.end());
		cout << x << "\n";
	}
	
}
