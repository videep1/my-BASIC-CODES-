#include<stdio.h>
void main()
{
	int a;
	printf("enter height in centimeter:");
		scanf("%d",&a);
	if(a<=169&&a>=165)
		printf("taller");
	else if(a<=165&&a>=150)
		printf("average");
	else if(a<=150)
		printf("dwarf");
	else
		printf("abnormal");
}
