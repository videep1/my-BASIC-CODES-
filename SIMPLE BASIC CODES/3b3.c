#include<stdio.h>
void main()
{
	int num,a,b,c,d,e,sum;
	printf("enter the number");
	scanf("%d",&num);
	e=num%10;
	d=num/10;
	d=d%10;
	c=num/100;
	c=c%10;
	b=num/1000;
	b=b%10;
	a=num/10000;
	
	sum=a+b+c+d+e;
	printf("sum=%d",sum);
}
	
