#include<stdio.h>
int main()
{
	int a,b,temp;
printf("enter 2 numbers");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("after swaping  %d %d",a,b);
}
