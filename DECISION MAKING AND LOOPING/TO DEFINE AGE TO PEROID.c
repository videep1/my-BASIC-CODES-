#include<stdio.h>
void main()
{
	int age,i,b=0,s=0,t=0,a;
	for(i=0;i<15;i++)
	{
		printf("student %d age:",i+1);
	       scanf("%d",&age);
       a=age;
       if(a>=0&&a<=4)
       {
	       b++;}
       if(a>=5&&a<=17)
       {
	       s++;}
       if(a>=18)
       {
	       t++;}
		       

	}
	printf("baby age:%d\n",b);
	printf("school age:%d\n",s);
	printf("adult age:%d\n",t);
}









			
 
 
	 
