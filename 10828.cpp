#include<iostream>
#include<algorithm>
#include<stack>
using namespace std; // stack <자료형> 이름; 
int main(){
	int n, k;
	string x;
	cin >> n;
	stack<int> st; 
	for(int i=0; i<n; i++){
		cin >> x;
		if(x=="push"){
			cin >> k;
			st.push(k);
		}
		else if(x=="pop"){
			if(st.empty()){ //empty
				cout << -1<<'\n';
			}
			else{
				cout<< st.top() << "\n";
				st.pop();
			}
		}
		else if(x=="size"){
			cout << st.size()<<'\n';
		}
		else if(x=="empty"){
			cout<<st.empty()<<'\n';
		}
		else{
			if(st.empty()){
				cout << -1<<'\n';
			}
			else cout << st.top()<<'\n';
		}
	}
}
