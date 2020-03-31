#include<iostream>
#include<vector>
using namespace std;
vector <int> v;
int k,x[14]={}; 
void back(int now, int cnt){
    if(cnt==6){
        for(int i=0; i<6; i++){
            cout << v[i] << " ";
        }
        cout << "\n";
        return ;
    }
    else{
        for(int i=now+1; i<k; i++){
            v.push_back(x[i]);
            back(i,cnt+1);
            v.pop_back();
        }
    }
}
int main(){
    while(1){
        cin >> k;
        if(k!=0){
            for(int i=0; i<k; i++){
                cin >> x[i];
            }
            back(-1,0);
            cout << "\n";
        }
        else return 0;
    }
}