#include<stdio.h>
struct expe
{
	char a[100];
	float n;
	int q;
}e[100];
void main()
{
	int i=0,k,b=0;
	float t=0;
again:	b++;
	printf("enter item details[%d]:\n",i+1);
	printf("item?");
		scanf("%s",e[i].a);
	printf("price?");
	scanf("%f",&e[i].n);
	printf("quantity?");
	scanf("%d",&e[i].q);
	t=t+(e[i].n*e[i].q);
	printf("want more items(press 1):");
	scanf("%d",&k);
	i++;
	if(k==1)
	
		goto again;
	else
		printf("all details are :\n");
	for(int m=0;m<b;m++)
	{
		printf("%s   %f    %d     %.2f   \n",e[m].a,e[m].n,e[m].q,e[m].n*e[m].q);

	}
	printf("###### total expenses :%.2f",t);
	printf("want to divide by friends(press1)");
	scanf("%d",&k);
	if(k==1)
	{
		int l;
		printf("how many friends?");
		scanf("%d",&l);
		printf("each friend have to pay:%.2f\n",t/l);
	}
}




