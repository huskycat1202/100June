#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
	int n, N[100]={}, k;
	cin >> n;
	string x;
	cin >> x;
	int X=x.size();
	for(int i=0; i<n; i++){
		cin >> k;
		N[i]=k;
	}
	stack <double> name;
	for(int i=0; i<X; i++){
		if(x[i]>='A' && x[i]<='Z'){
			name.push(N[x[i]-'A']);	
		}
		else{
	
		double b,a;
		b=name.top();
		name.pop();
		a=name.top();
		name.pop();
		
		if(x[i]=='+') {
			name.push(a+b);
		}
		if(x[i]=='-'){
			name.push(a-b);
		}
		if(x[i]=='*'){
			name.push(a*b);
		}
		if(x[i]=='/'){
			name.push(a/b);
		}
	}
		
		
	}
	printf("%.2lf",name.top());
}
