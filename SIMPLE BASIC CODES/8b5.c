#include <stdio.h>
int fact(int);
int main()
{
        int n, r;
        printf("Enter n and r in nPr:");
        scanf("%d %d",&n,&r);
        if(n<r||n<0||r<0)
                printf("Invalid input");
        else
        {
                float val = (float)fact(n)/fact(n-r);
                printf("The value of nPr is %f",val);
        }
        return 0;
}
int fact(int n)
{
        if(n==0)
                return 1;
        else
        {
                int f = 1;
                for(int i = 1; i<=n; i++)
                        f*=i;
                return f;
        }
}//Permutation
