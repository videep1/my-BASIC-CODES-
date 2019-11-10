#include<stdio.h>
void main()
{
	int a,i=0;
	printf("enter a number:");
		scanf("%d",&a);
 take:i++;
      if(i<=10)
      {
	      printf("%d*%d=%d\n",a,i,a*i);
	      goto take;
      }
}
