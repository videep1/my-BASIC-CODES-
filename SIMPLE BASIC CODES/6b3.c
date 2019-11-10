#include<stdio.h>
void main()
{
        int a[100], i, n, tempsum=0, sum=0, p=0, q=0;
        printf("Enter the number of elements of array:");
        scanf("%d",&n);
        printf("\nEnter the elements of array:");
        for(i=0; i<n; i++)
        scanf("%d",&a[i]);
        for(i=0; i<n-1; i++)
        {
                for(int j=i+1; j<n; j++)
                {
                        tempsum=a[i]+a[j];
                        if(tempsum > sum)
                        {
                                sum= tempsum;
                                p=i;
                                q=j;
                        }
                }
        }
        printf("\nThe pair of numbers with maximum sum is %d and %d",a[p],a[q]);
    
}
