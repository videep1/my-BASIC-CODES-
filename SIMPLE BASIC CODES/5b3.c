#include<stdio.h>
void main()
{
        int lr,ur,i,j,prime;
        printf("enter lower and upper range respectively:");
        scanf("%d %d",&lr,&ur);
        printf("prime no. list is:");
        for(i=lr; i<=ur; i++)
        {
                prime=1;
                for(j=2; j<i/2; j++)
                if(i%j==0)
                {
                        prime=0;
                        break;
                }
                if(prime)
                        printf("\t%d",i);

        }
}
