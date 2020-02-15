#include<iostream>
using namespace std;
int main(){
	int list[1000002]={};
	for(int x=2; x<=246912; x++){
		for(int i=x+x; i<=246912; i+=x){
			if(list[i]!=1){
				list[i]=1;
			}
		}
	}
	while(1){
		int n; cin >> n;
		if(n==0){
			return 0;
		} 
		else if(n==1){
			cout << 1 << "\n";
		}
		else{
			list[1]=1;
			int i=0;
			for(int x=n+1; x<=2*n; x++){
				if(list[x]==0) i++;
			}
			cout << i << "\n";
		}
	}
}
