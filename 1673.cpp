#include<iostream>
using namespace std;
int main(){
    long long int n,k,s=0,sum=0;
    while(scanf("%lld %lld", &n, &k)!=EOF){
        while(!(n==0 && s<k)){
            sum+=n;
            s+=n;
            n=s/k;
            s=s%k;
        }
        cout << sum << "\n";
        s=0,sum=0;
    }
}