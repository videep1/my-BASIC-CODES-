#include <stdio.h>
int add(int p)
{
        int sum = 0;
        printf("Enter %d numbers:",p);
        int a[p];
        for(int i = 0; i<p; i++)
        {
                int k;
                scanf("%d",&k);
                sum+=k;
        }
        return sum;
}
int main()
{
        int n;
        printf("How many numbers to be added:");
        scanf("%d",&n);
        int sum = add(n);
        printf("The addidtion of %d numbers is %d",n,sum);
}//Adding numbers`
