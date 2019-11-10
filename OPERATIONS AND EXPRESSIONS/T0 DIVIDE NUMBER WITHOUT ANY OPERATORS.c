#include<stdio.h>
void main()
{
	int a;
	  float  r1,r2;
	printf("enter number");
	scanf("%d",&a);
	r1=a>>4;
        r2=a<<4;
	printf("number divided by 16 =%f number multipled by 16=%f",r1,r2);
}


