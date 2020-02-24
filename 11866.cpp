#include<iostream>
using namespace std;
int main(){
	int n,k,t=0;
	int list[5001]={};
	cin >> n >> k;
	int count=0;
	cout << "<";
	for(int i=0; ; i++){
		if(i==n) i=0;
		if(list[i]==1){
			continue;
		}
		else{
			count++;
			if(count==k){
				count=0;
				list[i]=1;
				if(t!=n-1){
					cout << i+1 <<", ";
					t++;
				}
				else{
					cout << i+1;
					break;
				}
			}	
		}
	}
	cout << ">";
}