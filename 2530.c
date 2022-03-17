#include<stdio.h>
int main(){
	int h, m, s, S;
	scanf("%d %d %d %d", &h, &m, &s, &S);
	if(s+S>=60){
		m+=(s+S)/60;
        s=(s+S)%60;
	}
	else{
        s+=S;
    }

	if(m>=60){
		h+=m/60;
        m%=60;
	}

	if(h>=24){
        h=h%24;
    }
    printf("%d %d %d", h, m, s);
}