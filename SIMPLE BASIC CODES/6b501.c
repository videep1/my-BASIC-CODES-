#include<stdio.h>
void main()
{
        int n, i, ele;
        printf("Enter the number of elements in array:");
        scanf("%d",&n);
        int a[n];
        printf("Enter elements in the array:");
        for(i=0; i<n; i++)
        scanf("%d",&a[i]);
        printf("Enter the element to be searched:");
        scanf("%d",&ele);
        for(i=0; i<n; i++)
                if(a[i]==ele)
                        break;
        if(i==n)
                printf("%d is not present in the aray",ele);
        else
                printf("%d is found at %d position",ele,i+1);
       
} //linear search
