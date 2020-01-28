#include <queue>
#include <iostream>
using namespace std; 
/*에 담겨 있음
: priority_queue <int> pq; // 기본적으로 MAX HEAP인 상태
즉 top 또는 pop연산을 해주게 되면 가장 큰 원소가 pq에서 선택됨
push pop
q.push(a);
q.pop();
q.empty();
q.front();
q.back();
q.size();*/
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	priority_queue <int> pq;
	int n, x;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> x;
		if(x!=0){
			pq.push(x);
		}
		else{
			if(!pq.empty()){
				cout<<pq.top()<<'\n';
				pq.pop();
			}
			else cout<<0<<'\n';
		}
	}
}
