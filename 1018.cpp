#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,m,sum=64,count=0; cin >> n>> m;
	string chess[50];
	for(int i=0; i<n; i++){
		cin >> chess[i];
	}
	for(int i=0; i<=n-8; i++){
		for(int j=0; j<=m-8; j++){
			for(int x=i; x<i+8; x++){
				for(int y=j; y<j+8; y++){
					if((x+y)%2==(i+j)%2 && chess[x][y]!=chess[i][j]) count++;
					if((x+y)%2!=(i+j)%2 && chess[x][y]== chess[i][j]) count++;
				}
			}
			if(count>32) count=64-count;
			if(sum>count) sum=count;
			count=0;
		}
	}
	cout << sum;	
}
/*
다 받기
8*8 칸 하나하나 나누기
for(i++)
	(j+=2)
		if((i+j)%2==0 && i,j!=0,0) count++
		if((i+j)%2!=0 && i,j==0,0) count++
if(count>32) count=64-count
if(sum>count) sum=count
*/

