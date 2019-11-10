#include<stdio.h>
#include<math.h>
int main()
{
float n,s,sq;
for(n=0;n<=100;n++)
{
	s=n*n;
	sq=sqrt(n);
printf("square=%f squareroot=%f number=%f\n",s,sq,n);
}
return(0);
}

