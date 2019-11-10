#include<stdio.h>
#define pi 3.14
int main()
{
	float r,area,perimeter;
	printf("enter radius");
	scanf("%f",&r);
	area=pi*r*r;
	perimeter=2*pi*r;
	printf("area=%f and perimeter=%f",area,perimeter);
	return(0);
}
