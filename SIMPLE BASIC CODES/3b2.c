#include<stdio.h>
#define pi 3.14
void main()
{
	float l,b,a,p,c,ca,r;
	printf("enter length,breadth,radius");
	scanf("%f%f%f",&l,&b,&r);
	a=l*b;
	p=2*(l+b);
	c=2*pi*r;
	ca=pi*r*r;
	printf("area =%f perimeter=%f of rectangle\n area=%f circumferance=%f of circle",a,p,ca,c);
}
