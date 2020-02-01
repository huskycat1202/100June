#include<iostream>
using namespace std;
int main(){
	int n,sum=99;
	cin >> n;
	if(n<=99) sum=n;
	else if(n<1000){
		for(int i=100; i<=n; i++){
			int a=i/100;
			int b=(i-a*100)/10;
			int c=i%10;
			if((a-b)==(b-c)){
				sum++;
			}
		}
	}
	else sum=144;
	cout << sum;
}
/*
1 9
2 90
3 100~999
4
*/
