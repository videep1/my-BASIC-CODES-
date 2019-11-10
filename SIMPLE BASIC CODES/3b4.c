#include<stdio.h>
void main()
{
	int n,a,b,c,d,e;
	printf("enter number");
	scanf("%d",&n);
	e=n%10;
	d=n/10;
	d=d%10;
	c=n/100;
	c=c%10;
	b=n/1000;
	b=b%10;
	a=n/10000;
	printf("reverse number %d%d%d%d%d",e,d,c,b,a);
}
