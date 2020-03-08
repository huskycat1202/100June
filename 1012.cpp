#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;

int m,n,k,farm[51][51]={}, mv[4][2]={{1,0},{-1,0},{0,1},{0,-1}}; // mv는 추후에 설명할거니까 뭐지 하지 말고 보기
bool visited[51][51]={}; // 최대 50*50의 공간이 있다고 가정

void bfs(int X, int Y){
    queue<pair<int,int> > qu;
    visited[X][Y]=true;
    qu.push(make_pair(X,Y));

    while(!qu.empty()){
        int qx,qy,x,y; //얘는 전역변수로 올려줘도 되지만, 가독성을 위해 여기에 뒀음
        qx=qu.front().first; // 이하 3줄 qu에서 pop해준 값 각각 qx와 qy에 저장
        qy=qu.front().second;
        qu.pop();
        for(int i=0; i<4; i++){
            x=qx+mv[i][0];
            y=qy+mv[i][1];
            if(x<0 || x>=n || y<0 || y>=m || farm[x][y]!=1 || visited[x][y]==true) continue; // bfs가 돌면 안되는 조건들(x,y 범위 이탈 / 배추가 없음 / 이미 들림)

            qu.push(make_pair(x,y));
            visited[x][y]=true;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        for(int i=0; i<k; i++){
            int in1,in2;
            cin>>in1>>in2;
            farm[in1][in2]=1;
        }

        int sum=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(farm[i][j]==1 && visited[i][j]==false){ //조건 (배추 있어야함 && 들리지 않았어야함)
                    sum++;
                    bfs(i,j);
                }
            }
        }
        cout<<sum<<'\n';
        for(int i=0; i<n; i++){ //초기화
            for(int j=0; j<m; j++){
                visited[i][j]=false;
                farm[i][j]=0;
            }
        }
    }
}