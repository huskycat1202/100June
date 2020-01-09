#include<iostream>
using namespace std;
int tree[26][2];
void pre(int node){
	cout <<(char) (node+'A');
	if(tree[node][0] >= 0) pre(tree[node][0]);
	if(tree[node][1] >= 0) pre(tree[node][1]);
	}
void in(int node){
	if(tree[node][0] >=0){
		in(tree[node][0]);
		
	}
	cout << (char) (node+'A');
	if(tree[node][1] >=0){
		in(tree[node][1]);
	}
}
void post(int node){
	if(tree[node][0] >= 0){
		post(tree[node][0]);
	}	
	if(tree[node][1] >= 0){
		post(tree[node][1]);
	}
	cout << (char) (node+'A');
}
int main(){
	int n; cin >> n;
	while(n--){
		char p, l, r; cin >> p >> l >> r;
		p -= 'A'; l-= 'A'; r-='A';
		tree[p][0]= l;
		tree[p][1]= r;
	}
	pre(0);
	cout << "\n";
	in(0);
	cout << "\n";
	post(0);
}
