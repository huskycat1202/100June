#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	if(n==1){
		cout << 1;
		return 0;
	}
	int k=(n-2)/6;
	//cout << k;
	
	//int list[1000000000]={};
	//list[0]=0, list[1]=1;
	int x=0; 
	int y=1;
	for(int i=0; ; i++){
		if(x<=k && k<y){
			cout << i+2;
			return 0;
		}
		else{
			int t=y;
			y+=i+2;
			x=t;
			//list[i+2]=list[i+1]+i+2;
		}
	}
	
}
/*
i []
0 0  k
1 1  0        0 2~7 2 6 1~6
2 3  1,2      6 8~19 3 12 7~18
3 6  3,4,5   18 20~37 4 18 19~36
4 10 6,7,8,9 36 38~61 5 24  37~60
5 15
6 21
7 28
8 36
9 45
*/
