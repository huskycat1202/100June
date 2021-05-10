#include<stdio.h>
int main(){
	int n; // 손님 수
	scanf("%d", &n);
	int req[101]={}, pc[101]={}; // 손님이 원하는 자리, pc방 자리
	for(int i=0; i<n; i++){
    	scanf("%d", &req[i]); // req[i] : i번 손님이 원하는 좌석번호
    }
    int out=0; // 거절
    for(int i=0; i<n; i++){ // 손님마다 체크
    	if(pc[req[i]]==0){ // 빈 자리
    		pc[req[i]]=1; // 착석
		}
        else{ // 이미 착석 중
            out++;
        }
	}
	printf("%d",out);
}