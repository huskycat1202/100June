#include<iostream>
#include<string>
using namespace std;
int main(){
    while(1){
        string x[101];
        int r,c;
        cin >> r>> c;
        if(r!=0){
            for(int i=0; i<r; i++){
                cin >> x[i];
            }
            for(int i=0; i<r; i++){
                for(int j=0; j<c; j++){
                    if(x[i][j]!='*'){
                        int sum=0;
                        if(i-1>=0 && x[i-1][j]=='*'){sum++;}
                        if(i-1>=0 && j+1<c && x[i-1][j+1]=='*'){sum++;}
                        if(i-1>=0 && j-1>=0 && x[i-1][j-1]=='*'){sum++;}
                        if(i+1<r && x[i+1][j]=='*'){sum++;}
                        if(i+1<r && j+1<c && x[i+1][j+1]=='*'){sum++;}
                        if(i+1<r && j-1>=0 && x[i+1][j-1]=='*'){sum++;}
                        if(j-1>=0 && x[i][j-1]=='*'){sum++;}
                        if(j+1<c && x[i][j+1]=='*'){sum++;}
                        x[i][j]=sum+'0';
                    }
                }
            }
            for(int i=0; i<r; i++){
                for(int j=0; j<c; j++){
                    cout << x[i][j];
                }
                cout << "\n";
            }
        }
        else return 0;
    }
}
/*

*.*.*
..*..
*****
.....
..**.

46

*/