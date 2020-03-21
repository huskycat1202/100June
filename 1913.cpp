#include<iostream>
using namespace std;
int main(){
    int n,x,s[1000][1000]={};
    cin >> n >> x;
    s[n/2][n/2]=1;
    int dir=0,a=n/2,b=n/2,i=2,q=n/2,w=n/2; // 0=up 1=right 2=down 3=left
    while(i<=n*n){
        if(dir==0 && s[a-1][b]==0){ // up empty
            s[a-1][b]=i;
            a--;
            if(i==x){q=a, w=b;}
            i++;
            if(s[a][b+1]==0){dir=1;} // dir=right
            continue;
        }
        if(dir==1 && s[a][b+1]==0){ // right empty
            s[a][b+1]=i;
            b++;
            if(i==x){q=a, w=b;}
            i++;
            if(s[a+1][b]==0){dir=2;} // dir=down
            continue;
        }
        if(dir==2 && s[a+1][b]==0){ // down empty
            s[a+1][b]=i;
            a++;
            if(i==x){q=a, w=b;}
            i++;
            if(s[a][b-1]==0){dir=3;} // dir=left
            continue;
        }
        if(dir==3 && s[a][b-1]==0){ // left empty
            s[a][b-1]=i;
            b--;
            if(i==x){q=a, w=b;}
            i++;
            if(s[a-1][b]==0){dir=0;} // dir=up
            continue;
        }
        break;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << s[i][j] << " ";
        }
        cout << "\n";
    }
    cout << q+1 << " " << w+1;
}

/*

 9 2 3
 8 1 4
 7 6 5


*/