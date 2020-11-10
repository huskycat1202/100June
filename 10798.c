#include <stdio.h>
int main(){
	char a[6][16]={};
	for(int i=0; i<5; i++){
		scanf("%s", a[i]);
	}
	for(int j=0; j<15; j++){
		for(int i=0; i<5; i++){
			if(a[i][j]=='\0'){
				continue;
			} 
			printf("%c", a[i][j]);
		}
	}
	return 0;
}