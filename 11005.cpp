#include<iostream>
#include<algorithm>
using namespace std;
long long int n,b,i=0;
char x[10000];
int main(){
    cin >> n >> b;
    if(b==10 || n==0) {cout << n; return 0;}
    while(n!=0){
        if(n%b<10) x[i]=n%b+'0';
        else x[i]=(n%b)-10+'A';
        i++;
        n/=b;
    }
    reverse(x,x+i);
    for(int j=0; j<i; j++){
        cout << x[j];
    }
}