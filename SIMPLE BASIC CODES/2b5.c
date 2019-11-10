#include<stdio.h>
int main()
{
	float bp,da,hra,gp;
	printf("basic pay");
	scanf("%f",&bp);
	da=bp*40/100;
	hra=bp*20/100;
	gp=bp+da+hra;
	printf("gross pay=%f",gp);
	return(0);
}
