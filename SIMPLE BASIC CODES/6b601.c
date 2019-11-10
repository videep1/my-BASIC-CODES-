#include<stdio.h>
void main()
{
	int a[100],i,size,j,t;
	
	printf("enter the size of an array:");
	scanf("%d",&size);
	printf("enter %d elements of array:",size);
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);
	for(i=1;i<size;i++)
		for(j=0;j<size-i;j++)
		
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
	for(i=0,printf("sorrted array is:");i<size;i++)
		printf("%d",a[i]);
}//bubble sort
