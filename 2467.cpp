#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
    long long int n,x[100002]={}; cin >> n;
    for(int i=0; i<n; i++){
        cin >> x[i]; // -99 -2 -1 4 98
    }
    sort(x,x+n);
    long long int min,max,mid,a=11111111111,b=111111111111;
    for(int i=0; i<n; i++){
        min=0, max=n-1;
        //cout << i << "\n";
        while(min<=max){
            //cout << min << " " << max << "\n";
            mid=(min+max)/2;
            if(i!=mid && abs(a+b)>abs(x[i]+x[mid])){
                a=x[i],b=x[mid];
            }
            if(x[i]+x[mid]<0){
                min=mid+1;
            }
            else if(x[i]+x[mid]>0){
                max=mid-1;
            }
            else{
                cout << x[i] << " " << x[mid];
                return 0;
            }
        }
    }
    cout << a << " " << b;
}