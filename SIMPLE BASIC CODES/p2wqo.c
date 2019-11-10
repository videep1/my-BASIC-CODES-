#include<stdio.h>
void main()
{
	int x=10;
	x+=(x++)+(++x)+x;
	printf("%d",x);
}
