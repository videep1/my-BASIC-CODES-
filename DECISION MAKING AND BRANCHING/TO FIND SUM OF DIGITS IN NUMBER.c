#include<stdio.h>
void main()
{
	int a,r,sum=0;
	printf("enter a number");
	scanf("%d",&a);
	if(a<=0||a>=1000)
		printf("entered number is out of range");
	else
       for( sum=0;a!=0;a=a/10)
       {
	       r=a%10;
		       sum=sum+r;
		       
       }


	 printf("%d",sum);
}
