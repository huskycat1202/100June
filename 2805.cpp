#include<iostream>
using namespace std;
int main(){
    long long int n,m,tree[1000001]={},max=0,cnt=0,x; cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> tree[i];
        if(tree[i]>max) max=tree[i];
    }
    long long int min=0,mid;
    while(min<=max){
        mid=(min+max)/2;
        for(int i=0; i<n; i++){
            if(tree[i]>mid) cnt+=tree[i]-mid;
        }
        if(cnt<m)max=mid-1;
        else{ min=mid+1; x=mid;}
        cnt=0;
    }
    cout << x;
}