#include<string>
#include<iostream>
using namespace std;
int main(){
	int n; char m[100][100]={};
	cin >> n; //8*8
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> m[i][j];
		}
	}// 거울 입력 완료

	int k; cin >> k;
	if(k==2){ // 좌우 반전
		for(int i=0; i<n; i++){
			for(int j=n-1; j>-1; j--){ // index 뒤에서 부터 출력
				cout << m[i][j];
			}
			cout << "\n";
		}
	}
	else if(k==3){ // 상하 반전
		for(int i=n-1; i>-1; i--){
			for(int j=0; j<n; j++){
				cout << m[i][j];
			}
			cout << "\n";
		}
	}
	else{ // k=1 그대로 
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cout << m[i][j];
			}
			cout << "\n";
		}
	}
	
}