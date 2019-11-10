#include<stdio.h>
void main()
{
        int a[100],n,t,i,j,k;
        printf("Enter the number of elements in array:");
        scanf("%d",&n);
        if(n>0)
        {
                printf("\nEnter the elements of array:");
                for(i=0;i<n;i++)
                scanf("%d",&a[i]);
                for(j=0;j<n/2;j++)
                {
                        t=a[j];
                        a[j]=a[n-j-1];
                        a[n-j-1]=t;
                }
               printf("\nReversed array is:");
                for(k=0; k<n; k++)
                {       printf("%d ",a[k]);}
        }
        else printf("\nInvalid input");
       
}
