#include<stdio.h>
#include<math.h>
void main()
{
	int i,n;
	float sum=0,a;
	printf("enter total number of terms:");
	scanf("%d",&n);
	if(n>0)
	{
	for(i=0;i<n;i++)
	{
	a=2*i+1;
		sum=sum+(float)pow(a,2)/pow(a,3);
				}
	}
	printf("sum of series:%f",sum);
}
