#include<stdio.h>
void main()
{
        int n, i, pos, ele;
        printf("Enter the number of elements:");
        scanf("%d",&n);
        int a[n+1];
        printf("Enter the elements of array:");
        for(i=0; i<n; i++)
        scanf("%d",&a[i]);
        printf("Enter the position(index) where the number has to be inserted:");
        scanf("%d",&pos);
        printf("Enter the element to be inserted:");
        scanf("%d",&ele);
        for(i=n-1; i>=pos; i--)
        a[i+1]=a[i];
        a[pos]=ele;
        printf("New array is :");
        for(i=0; i<n+1; i++)
                printf("%d ",a[i]);
       
}
