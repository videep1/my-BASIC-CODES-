#include<stdio.h>
void main()
{
	char a[1000];
int 	n;
printf("enter the string:");
scanf("%s",a);
for(int i=0;a[i]!='\0';i++)
{
	n=i;
}
for(int i=0;i<n;i++)
{char temp;
	temp=a[i];
	a[i]=a[i+1];
	a[i+1]=temp;
	
	i++;
}
printf("the string after adjacent swap:%s",a);
}

