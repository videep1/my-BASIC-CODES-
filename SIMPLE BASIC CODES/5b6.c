#include<stdio.h>
void main()
{
        int num1,num2,gcd,max,i;

        printf("enter first number:");
        scanf("%d",&num1);
         printf("enter second number:");
        scanf("%d",&num2);
        max=(num1>num2)?num1:num2;


        while((max%num1==0 && max%num2==0)==0)
        {
        max++;
        }

        printf("lcm=%d\n",max);

        gcd =(num1*num2)/max;


        printf("gcd :%d",gcd);


}
