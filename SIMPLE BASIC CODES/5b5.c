#include<stdio.h>
#include<math.h>
void main()
{
        int x,f=1,n,i,j,s=1;
        printf("enter value of x and n respectively:");
        scanf("%d %d",&x,&n);
        for(i=1;i<=n;i++)
        {
                                f=f*i;
                        s=s+pow(x,i)/f;

        }
        printf("%d",s);
}
