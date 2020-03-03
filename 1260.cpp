#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
int n,m,v,x,y;
vector <int> gr[1001];
//dfs
bool dvisited[1001]={};
void dfs(int v){
    cout << v << ' ';
    for(int i:gr[v]){
        if(!dvisited[i]){
            dvisited[i]=1;
            dfs(i);
        }
    }
}

//bfs
bool bvisited[1001]={};
void bfs(){
    queue <int> q;
    q.push(v);
    bvisited[v]=1;
    while(!q.empty()){
        int f = q.front();
        cout << f << ' ';
        q.pop();
        for(int i:gr[f]){
            if(!bvisited[i]){
                bvisited[i]=1;
                q.push(i);
            }
        }
    }
}

int main(){
    cin >> n >> m >> v;
    for(int i=0; i<m; i++){
        cin >> x >> y;
        gr[x].push_back(y);
        gr[y].push_back(x);
    }
    for(int i=1; i<=n; i++){
        sort(gr[i].begin(),gr[i].end());
    }
    dvisited[v]=1;
    dfs(v);
    cout<<'\n';
    bfs();
}

/*
gr[1] 2 3
gr[2] 1 5
gr[3] 1 4
gr[4] 3 5
gr[5] 2 4
*/