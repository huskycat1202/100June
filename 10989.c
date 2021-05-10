#include<stdio.h>
int main(){
	int n, input, num[10001]={};
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d", &input);
		num[input]++;
	}
	for(int i=0; i<=10000; i++){
		while(num[i]>0){
            num[i]--;
			printf("%d\n",i);
		}
	}
}