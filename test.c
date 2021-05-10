#include<stdio.h>
int main(){
	int x,y,z;
    scanf("%d %d %d", &x, &y, &z);
    if(x>y){
		if(y>z){
			printf("%d %d %d", z,y,x);
		}
		else{ // y<z
			printf("%d ",y);
			if(x<z){
				printf("%d %d", x,z);
			}
			else{ // x>z
				printf("%d %d", z,x);
			}
		}
	}
    else{ // x<y
		if(y<z){
			printf("%d %d %d", x,y,z);
		}
		else{ //y>z
			if(x>z){
				printf("%d %d",z,x);
			}
			else{ // x<z
				printf("%d %d",x,z);
			}
			printf(" %d", y);
		}
	}
}