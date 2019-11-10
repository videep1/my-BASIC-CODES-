#include<stdio.h>
void main()
{
	int i=0,n;
char	a[100];
	printf("enter the string:");
	gets(a);
	while(a[i]!='\0')
			{
		i++;
	}
	n=i;
	printf("length of string: %d",n);
}

//string length finding
