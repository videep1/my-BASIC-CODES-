#include <stdio.h>
#include <math.h>
int eval(int ,int );
int main()
{
        int n, i, x, sum = 0;
        printf("Enter the number of terms:");
        scanf("%d",&n);
        printf("Enter x:");
        scanf("%d",&x);
        for(i=1; i<=n; i++)
                sum+=eval(x, i);
        printf("The sum of the series is %d",sum);
        return 0;
}
int eval(int x, int i)
{
        return (pow(x, i));
}

~        //Series calculator 
