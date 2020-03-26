#include<iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int num1[101]={}, num2[101]={}, num3[101]={}, strike[101]={}, ball[101]={};
    for(int i=0; i<n; i++){
        cin >> num >> strike[i] >> ball[i];
        num1[i]=num/100;
        num2[i]=(num/10)%10;
        num3[i]=num%10;
    }
}

/*
4
1 2 3 1 1
3 5 6 1 0
3 2 7 2 0
4 8 9 0 1
*/