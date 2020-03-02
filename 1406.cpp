#include<iostream>
#include<string>
using namespace std;
int main(){
    char line[600001],x;
    int cur=0,m,i=0;
    while(line[i]!='\0'){
        cin >> line[i];
        i++;
        cur++;
    }
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> x;
        if(x=='L' && cur>0) cur--;
        else if(x=='D' && cur<i) cur++;
        else if(x=='B' && cur>0){
            cur--;

        }
        else{
            cin >> line[i]
        }
    }
}