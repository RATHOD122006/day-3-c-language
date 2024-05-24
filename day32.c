#include<stdio.h>
main(){
	int a,b;
	printf("enter any 2 number"); 
	scanf("%d%d",&a,&b);
	int sum;
	sum=(a*a)+(2*a*b)+(b*b);
	printf("%d",sum);
}