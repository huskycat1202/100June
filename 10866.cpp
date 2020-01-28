#include<deque>
#include<iostream>
using namespace std;

deque<int> dq;
int main(){
	int n, t;
	string x;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> x;
		if(x=="push_back"){
			cin >> t;
			dq.push_back(t);
		}
		else if(x=="push_front"){
			cin >> t;
			dq.push_front(t);
		}
		else if(x=="pop_front"){
			if(!dq.empty()){
				cout << dq[0];
				dq.pop_front();
			}
			else{
				cout << "-1";
			}
			cout << "\n";
		}
		else if(x=="pop_back"){
			if(!dq.empty()){
				cout << dq[dq.size()-1];
				dq.pop_back();
			}
			else{
				cout << "-1";
			}
			cout << "\n";
		}
		else if(x=="size"){
			cout << dq.size()<< "\n";
		}
		else if(x=="empty"){
			cout << dq.empty()<< "\n";
		}
		else if(x=="front"){
			if(!dq.empty()){
				cout << dq.front();
			}
			else{
				cout << "-1";
			}
			cout << "\n";
		}
		else{
			if(!dq.empty()){
				cout << dq.back();
			}
			else(cout <<"-1");
			cout << "\n";
		}
	}
	
}
