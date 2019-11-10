#include<stdio.h>
 void main()
{
        int a,rev=0,sum=0,i,j,m,n;
        printf("enter a number:");
        scanf("%d",&a);

        {
        n=a;
        a=(a>0)?a:-a;
        m=a;
        while(a>0)
        {
                j=a%10;
                rev=rev*10+j;
                a/=10;
        }
           if(n<0)
                printf("\n reverse number is:-%d",rev);
           else
                   printf("\n reverse number is :%d",rev);

                for(;m>0;)
                {
                i=m%10;
                sum+=i;
                m/=10;
                }
                printf("\n sum of digits is:%d\n",sum);


       }
}
