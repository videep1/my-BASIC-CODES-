#include<stdio.h>
void main()
{
	float km,m,inch,feet,centi;
	printf("enter dis in kilometer");
	scanf("%f",&km);
	m=km*1000;
	feet=km*3280.83;
	centi=m*100;
	inch=2.5*centi;
	printf("meter=%f feet=%f centi=%f inch=%f",m,feet,centi,inch);
}
