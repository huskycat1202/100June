#include<iostream>
#include<deque>
using namespace std;
int n,m,x[51]={};
deque <int> dq;
int main(){
    cin >> n >> m;
    for(int i=0; i<n; i++){
        dq.push_back(i); // dq에 0 부터 다 집어넣기
    }
    for(int i=0; i<m; i++){
        cin >>  x[i];
        x[i]--; // 순서에 맞게

    }
    int count=0;
    for(int i=0; i<m; i++){
        if(dq.front()==x[i]) dq.pop_front(); //내가 찾는 애랑 맨앞이랑 같으면 1
        else{
            for(int j=0; j<dq.size(); j++){
                if(dq.at(j)==x[i]){ //j번째랑 내가 찾는 애랑 같으면
                    if(dq.size()-1-j >= j-1){ // 2번방법이 유리할 떄
                        for(int k=0; k<j; k++){
                            dq.push_back(dq.front());
                            dq.pop_front();
                            count++;
                        }
                    }
                    else{ //3번방법이 유리할 때
                        for(int k=0; k<dq.size()-j; k++){
                            dq.push_front(dq.back());
                            dq.pop_back();
                            count++;
                        }
                    }
                }
            }
            i--;
        }
    }
    cout << count;
}