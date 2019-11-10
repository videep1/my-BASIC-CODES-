#include<stdio.h>
void main()
{
	float  m,p,c,k,t;
	printf("enter marks of maths ,physics,chemistry");
	scanf("%f%f%f",&m,&p,&c);
	t=m+p+c;k=m+p;
	(m>=60&&p>=50&&c>=40&&t>=200)||k>=150?printf("eligible"):printf("noteligible");
}
