#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter 3 numbers");
	scanf("%d%d%d",&a,&b,&c);
 ((a>b)&&(b>c)||(c>b)&&(b>a))?printf("second largest is %d",b):(((b>a)&&(a>c))||((c>a)&&(a>b))?printf("second largest is %d",a):(((a>c)&&(c>b))||((b>c)&&(c>a))?printf("second largest is %d",c):printf("all are equal")));
}
