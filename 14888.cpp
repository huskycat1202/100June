#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,a[11]={},x[4]={}; cin >> n;
    int calcul[10]={},k=0;
    for(int i=0; i<n; i++){
        cin >> a[i]; // 1 2 3 4 5 6
    }
    for(int i=0; i<4; i++){
        cin >> x[i]; // 2 1 1 1
        for(int j=0; j<x[i]; j++){
            calcul[k]=i; // 0 0 1 2 3
            k++;
        }
    }
    int sum=a[0];
    for(int i=0; i<n-1; i++){
        if(calcul[i]==0){ // +
            sum+=a[i+1];
        }
        else if(calcul[i]==1){ // -
            sum-=a[i+1];
        }
        else if(calcul[i]==2){ // *
            sum*=a[i+1];
        }
        else{ // /
            sum/=a[i+1];
        }
    }
    int MAX=sum, MIN=sum;
    sum=0;
    while(next_permutation(calcul,calcul+n-1)){
        sum=a[0];
        for(int i=0; i<n-1; i++){
            if(calcul[i]==0){ // +
                sum+=a[i+1];
            }
            else if(calcul[i]==1){ // -
                sum-=a[i+1];
            }
            else if(calcul[i]==2){ // *
                sum*=a[i+1];
            }
            else{ // /
                sum/=a[i+1];
            }
        }
        if(sum>MAX) MAX=sum;
        if(sum<MIN) MIN=sum;
        sum=0;
    }
    cout << MAX << "\n" << MIN;
}