#include <stdio.h>
void leap(int n)
{
        if((n%100==0)&&(n%400==0))
                printf("Leap year");
        else if(n%4==0)
                printf("leap year");
        else
                printf("Not a leap year");
}
int main()
{
        int n;
        printf("Enter year");
        scanf("%d",&n);
        leap(n);
        return 0;
}//Finding leap year
