#include<iostream>
using namespace std;
int main(){
	int n,x[3001]={0,0,0,0,0,0,0,0,0,1};
	cin >> n;
	for(int i=9; i<=n; i+=3){
		x[i]=x[i-3]+(i/3-2);
	}
	cout << x[n];
<<<<<<< HEAD
}
=======
}
>>>>>>> 77dc31ff5e3dda38253880019fce28896f87f828
