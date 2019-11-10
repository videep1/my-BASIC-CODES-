#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,result1,result2;
	printf("enter two numbers");
	scanf("%f%f",&a,&b);
	result1=pow(a-b,2);
	result2=(a-b)*(a-b);
	printf("result1=%f result2=%f",result1,result2);
}
