#include<stdio.h>
main(){
	int a;
	int b;
	printf("enter any 2 number");
	scanf("%d%d",&a,&b);
	int area ;
	area=(a*a)+(b*b)-(2*a*b);
	printf("%d",area);
}