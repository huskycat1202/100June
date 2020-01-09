#include<iostream>
using namespace std;
int main(){
	long long int s, k=1, sum=0, i=2;
	cin >> s;
	while(1){
		if(s>=k){
			k+=i;
			i++;
			sum++;
		}
		else{
			cout << sum;
			break;
		}
	}
}
/*
0
1 2 1
3 5 2
6 9 3
10 15 4
16 21 5
22 28 6
29 36 7
2 3 4 5 6 7 8...*/
