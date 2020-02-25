#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    int n,x[500001],sum=0; cin >> n;
    for(int i=0; i<n; i++){
        cin >> x[i];
        sum+=x[i];
    }
    sort(x,x+n);
    int count[500001]={},max=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(x[i]==x[j]){
                count[i]++;       
            }
        }    
        if(count[i]>max) max=count[i];
        i+=count[i];
    }
    int ans=-1;
    for(int i=0; i<n; i++){
        if(max==count[i] && ans!=-1){
            ans=i;
            break;
        }
        else if(count[i]==max){
            max=count[i];
            ans=i;
        }
    }
    cout << round((float)sum/n) << "\n" << x[n/2] << "\n" << x[ans] << "\n" << x[n-1]-x[0];
}

/* -2 1 2 3 8
합/n  12/5 = 2
중간값 [5/2] 2
가장 자주나오는 값 / 최빈 값중 두번쨰로 작은 값 1
최대-최소 
*/