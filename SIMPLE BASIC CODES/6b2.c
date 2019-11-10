#include <stdio.h>
void main()
{
        int n, i, count=0;
        printf("Enter the number of numbers which you want to enter:");
        scanf("%d",&n);
        int a[n];
	printf("enter the numbers");
        for(i=0; i<n; i++)
        scanf("%d",&a[i]);
        for(i=0; i<n; i++)
        {
                int rev=0, t=0, temp=0;
                temp=a[i];
                while(temp!=0)
                {
                        t=temp%10;
                        rev=rev*10+t;
                        temp=temp/10;
                }
                if(a[i]==rev) count++;
        }
        printf("\nNumber of palindromes in the given list is %d",count);
       
}
