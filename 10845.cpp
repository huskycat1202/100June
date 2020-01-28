#include<queue>
#include<iostream>
using namespace std;
int main(){
	int n, k;
	cin >> n;
	queue<int> q;
	while(n--){
		string x;
		cin >> x;
		if(x=="push"){
			cin >> k;
			q.push(k);
		}
		else if(x=="pop"){
			if(q.empty()){
				cout <<"-1\n";
			}
			else{
				cout << q.front() << "\n";
				q.pop();
			}
		}
		else if(x=="size"){
			cout << q.size() << "\n";
		}
		else if(x=="empty"){
			cout << q.empty() << "\n";
		}
		else if(x=="front"){
			if(q.empty()){
				cout <<"-1\n";
			}
			else cout << q.front() << "\n";
		}
		else{
			if(q.empty()){
				cout <<"-1\n";
			}
			else cout << q.back() << "\n";
		}
	}
}
