#include<iostream>
#include<cmath>
using namespace std;
double a,b,c;
int main(){
    int i=0;
    while(++i){
        cin >> a >> b >> c;
        if(a==b && b==c && c==0) return 0;
        cout << "Triangle #" << i << "\n";
        cout.precision(3);
        cout<<fixed;
        if((c!=max(max(a,b),c) && c!=-1) || a==0 || b==0 || c==0 || a==c || b==c) {cout << "Impossible.";}
        else if(a==-1){
            a=(double)sqrt((c*c-b*b));
            cout << "a = " << a; 
        }
        else if(b==-1){
            b=(double)sqrt((c*c-a*a));
            cout << "b = " << b;
        }
        else{
            c=(double)sqrt((a*a+b*b));
            cout << "c = " << c;
        }
        cout << "\n\n";
    }
}