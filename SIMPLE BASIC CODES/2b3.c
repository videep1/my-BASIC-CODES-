#include<stdio.h>
int main()
{
	float f,c;
	printf("enter faranheit temp");
	scanf("%f",&f);
	c=5*(f-32)/9;
	printf("celcius=%f",c);
	return(0);
}
