#include<iostream>
#include<string>
using namespace std;
int main(){
	string chess[8];
	int sum=0;
	for(int i=0; i<8; i++){
		cin >> chess[i];
	}
	for(int i=0; i<8; i++){
		for(int j=0; j<9; j++){
			if(i%2==0 && j%2==0 && chess[i][j]=='F'){
				sum++;
			}
			else if(i%2==1 && j%2==1 && chess[i][j]=='F'){
				sum++;
			}
		}
	}
	
	cout << sum;
	
}
/*
0,0 0,2 0,4 0,6 Â¦¼ö
 
1,1 1,3 1,5 1,7 È¦¼ö 
*/

