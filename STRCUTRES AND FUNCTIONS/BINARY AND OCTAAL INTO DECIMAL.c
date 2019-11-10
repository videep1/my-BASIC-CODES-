#include <stdio.h>
#include <math.h>
int bintodec(int b)
{
        int p, i = 0, ans = 0;
        while(b!=0)
        {
                p = b%10;
                ans+=(p*pow(2, i));
                b = b/10;
                i++;
        }
        return ans;
}
int octtodec(int b)
{
        int p, i = 0, ans = 0;
        while(b!=0)
        {
                p = b%10;
                ans+=(p*pow(8, i));
                b = b/10;
                i++;
        }
        return ans;
}
int main()
{
        int choice, input;
        printf("Enter a choice\n1.Binary to decimal\n2.Octal to decimal\n");
        scanf("%d",&choice);
        if(choice == 1)
        {
                printf("Enter a binary number:");
                scanf("%d",&input);
                int val = bintodec(input);
                printf("The decimal value of %d is %d",input,val);
        }
        else if(choice == 2)
                {
                printf("Enter a octal number:");
                scanf("%d",&input);
		}}



