#include<stdio.h>
int main(){
	int a,b,c,d,e,sum=0;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	sum += a*a;
    sum += b*b;
    sum += c*c;
    sum += d*d;
    sum += e*e;
	printf("%d",sum%10);
}