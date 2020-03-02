#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,m,mid,low,high,x=1,N[500001]={},M[500001]={},ans[500001]={};
    cin >>n;
    for(int i=0; i<n; i++){
        cin >> N[i];
    }
    sort(N,N+n);
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> M[i];
    }
    
    for(int i=0; i<m; i++){
        low=0; high=n-1;
        while(low<=high){
            mid=(low+high)/2;
            if(M[i]==N[mid]){ans[i]++; break;}
            else if(M[i]<N[mid]) high=mid-1;
            else if(M[i]>N[mid]) low=mid+1;
        }
        cout << ans[i] << " ";
    }
}