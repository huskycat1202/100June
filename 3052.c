#include<stdio.h>
int main(){
	int a[11]={};
	for(int i=0; i<10; i++){
    	scanf("%d", &a[i]);
    	a[i]%=42;
    }
    int m=0;
  	for(int k=0; k<42; k++){
    	for(int i=0; i<10; i++){
    		if(k==a[i]){
    			m++;
    			break;
			}
		}
	}
	printf("%d",m);
	return 0;
}