#include<stdio.h>
int main(){
	int h, m;
	scanf("%d%d", &h, &m);
	if(h){ // h>0
        if(m<45){
			printf("%d %d", h-1, m+15);
		}
		else{ // m>=45
			printf("%d %d", h, m-45);
		}
	}
	else{ // h==0
		if(m<45){
			printf("23 %d", m+15);			
		}
		else{ // m>=45
			printf("%d %d", h, m-45);
		}
	}
}