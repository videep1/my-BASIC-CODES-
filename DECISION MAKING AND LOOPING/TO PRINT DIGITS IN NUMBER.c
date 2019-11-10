#include<stdio.h>
void main()
{
	int n,r1,sum=0;
	printf("enter number:");
	scanf("%d",&n);
	printf("each digit of given number are:");

	do{
		r1=n%10;
		sum=sum*10+r1;
		n=n/10;
		
	}while(n!=0);
	n=sum;
	do
	{
		r1=n%10;
		n=n/10;
		printf("%d ",r1);

}while(n!=0);
}

