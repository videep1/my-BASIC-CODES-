#include<stdio.h>
void main()
{
        int n, i, ele, flag=0;
        printf("Enter the number of elements in the array:");
        scanf("%d",&n);
        int a[n];
        printf("Enter the elements of the array(sorted):");
        for(i=0; i<n; i++)
        scanf("%d",&a[i]);
        printf("Enter the element to be searched:");
        scanf("%d",&ele);
        int first=0, last=n-1, middle;
        middle=(first+last)/2;
        while(first<=last)
        {
                if(a[middle]==ele)
                {
                        flag=1;
                        break;
                }
                else if(a[middle]>ele)
                        last=middle-1;
                else first=middle+1;
                middle=(first+last/2);
        }
        if(flag==1)
                printf("%d is found at %d position and %d index",ele,middle,middle+1);
        else
                printf("Element is not found");

        }//binary seach
