#include<stdio.h>
int main()

{
	float rollno,m1,m2,m3,total,avg,maths,eng,comp;
	printf("enter rollno and marks");
	scanf("%f%f%f%f",&rollno,&m1,&m2,&m3);
	maths=m1;
	eng=m2;
	comp=m3;
	total=(m1+m2+m3);
	avg=total/3;
	printf("rollno=%f maths=%f eng=%f comp=%f total=%f avg=%f",rollno,maths,eng,comp,total,avg);
	return(0);
}
