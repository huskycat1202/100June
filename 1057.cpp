#include<iostream>
using namespace std;
int n,kjm,ihs;
int main(){
    int count=0;
    cin >> n >> kjm >> ihs;
    while(1){
        count++;
        if((kjm-ihs==1 && kjm%2==0) || (ihs-kjm==1 && ihs%2==0)) {break;}
        if(kjm%2==0) {kjm/=2;}
        else {kjm=kjm/2+1;}
        if(ihs%2==0) {ihs/=2;}
        else {ihs=ihs/2+1;}
    }
    cout << count;
    return 0;
}