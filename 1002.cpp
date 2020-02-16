#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int x1,y1,r1,x2,y2,r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		if(x1==x2 && y1==y2 && r1==r2) cout << "-1\n"; // ¹«ÇÑ
		else if(x1==x2 && y1==y2 && r1!=r2) cout << "0\n";
		else if(r1+r2==sqrt(pow((x1-x2),2)+pow((y1-y2),2)) || max(r1,r2)==sqrt(pow((x1-x2),2)+pow((y1-y2),2))+min(r1,r2)) cout << "1\n";
		else if(r1+r2<sqrt(pow((x1-x2),2)+pow((y1-y2),2)) || max(r1,r2)>sqrt(pow((x1-x2),2)+pow((y1-y2),2))+min(r1,r2)) cout << "0\n"; 
		else cout << "2\n";
	}
}
