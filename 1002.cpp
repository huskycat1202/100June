#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	double t, x1, x2, y1, y2, r1, r2;
	cin >> t;
	for(int i=0; i<t; i++){
		cin >>  x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		int sum=-100;
		double x= x1-x2, y= y1-y2; double d= sqrt(pow(x,2)+pow(y,2));
		printf("%lf ",d); 
		if(r1+r2==d || r1+d==r2) sum=1;
		else if(r1+r2>d && max(r1, r2)>d ) sum=2;
		else if(r1==r2 && d==0) sum=-1;	
		cout << sum << "\n";
	}
}
/*  조규현 x1, y1, 류재명 r1
	백승환 x2, y2, 류재명 r2 
	pow(x,2)*/
