#include <iostream>
using namespace std;

int n, candy = 0;
char mat[51][51];

void check(int a, int b, int a2, int b2){
    char tmp;
    tmp = mat[a][b];
    mat[a][b] = mat[a2][b2];
    mat[a2][b2] = tmp;

    int cnt = 0;
    for(int i = 0 ; i < n ; i ++){
        cnt = 0;
        for(int j = 0 ; j < n - 1; j ++){
            if(mat[i][j] == mat[i][j + 1]) cnt ++;
            else cnt = 0;
            if(candy < cnt) candy = cnt;
        }
    }

    for(int i = 0 ; i < n; i ++){
        cnt = 0;
        for(int j = 0 ; j < n - 1; j ++){
            if(mat[j][i] == mat[j + 1][i]) cnt ++;
            else cnt = 0;
            if(candy < cnt) candy = cnt;
        }
    }

    tmp = mat[a][b];
    mat[a][b] = mat[a2][b2];
    mat[a2][b2] = tmp;
}

int main(){
    cin >> n;
    for(int i = 0 ; i < n ; i ++){
        scanf("%s", mat[i]);
    }

    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < n - 1; j ++){
            if(mat[i][j] != mat[i][j + 1]) check(i, j, i, j + 1);
        }
    }

    for(int i = 0 ; i < n - 1; i ++){
        for(int j = 0 ; j < n ; j ++){
            if(mat[i][j] != mat[i + 1][j]) check(i, j, i + 1, j);
        }
    }

    cout << candy + 1 << '\n';
}