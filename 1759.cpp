#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int visited[20];
int l, c;
char a[20];
vector <char> ans;

void foo(int cnt, int prev, int s){
  if(cnt == l){
    int m = 0, j = 0;
    for(int i = 0 ; i < l; i ++){
      if(ans[i] == 'a' || ans[i] == 'e' || ans[i] == 'i' || ans[i] == 'o' || ans[i] == 'u'){
        m ++;
      }
      else j ++;
    }
    if(m < 1 || j < 2) return;
    for(int i = 0 ; i < l ; i ++) cout << ans[i];
    cout << '\n';
  }

  for(int i = s; i < c; i ++){
    if(prev != i){
      visited[i] = 1;
      ans.push_back(a[i]);
      foo(cnt + 1, i, i);
      visited[i] = 0;
      ans.pop_back();
    }
  }
}

int main(){
  cin >> l >> c;
  for(int i = 0 ; i < c; i ++){
    cin >> a[i];
  }
  sort(a, a + c);
  foo(0, -1, 0); // cnt, prev, s
}