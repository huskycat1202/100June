#include <queue>
#include <iostream>
using namespace std; 
/*�� ��� ����
: priority_queue <int> pq; // �⺻������ MAX HEAP�� ����
�� top �Ǵ� pop������ ���ְ� �Ǹ� ���� ū ���Ұ� pq���� ���õ�
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
