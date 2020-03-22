#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int t;
int main(){
    cin >> t;
    while(t--){
        int n,m; cin >> n >> m; // 문서 수 , 어느문서의 순서가 궁금해?
        int x[101]={};// 중요도
        queue <pair<int,int> > q;// 문서들,중요도 
        for(int i=0; i<n; i++){
            cin >> x[i]; q.push(make_pair(i,x[i])); // 문서 넣기 0123 1234
        }
        sort(x,x+n); reverse(x,x+n);// 4321
        int i=0,cnt=0;
        while(1){
            if(x[i]==q.front().second){
                cnt++;
                if(q.front().first==m) {cout << cnt << "\n"; break;}
                q.pop();
                i++;
            }
            else{
                int a = q.front().first, b = q.front().second;
                q.push(make_pair(a,b));
                q.pop();
            }
        }
    }
}

