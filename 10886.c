#include<stdio.h>
 int main(){
 	int n, b=0 , c=0;
 	scanf("%d", &n);
 	
 	for( int i=0; i<n; i++){
 		int a;
 		scanf("%d", &a);
 		if(a==1){
 			b++;
		}
		if(a==0){
			c++;
		}

	}if(b>c){
		printf("Junhee is cute!");
	}
	else{
	    printf("Junhee is not cute!");
	}
 	return 0;
 }