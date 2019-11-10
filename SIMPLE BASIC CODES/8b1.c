#include <stdio.h>
void fibo(int);
int main()
{
        int n;
        printf("Enter the number of elements in fibonacci:");
        scanf("%d",&n);
        if(n>0)
                fibo(n);
        else
                printf("Invalid Input");
        return 0;
}
void fibo(int n)
{
        int b = 1, a=0, i, c;
        if(n == 1)
                printf("0");
        else
        {
                printf("0 1 ");
                for(i = 1; i<=n-2; i++)
                {
                        c = a + b;
                        printf("%d ",c);
                        a = b;
                        b = c;
                }
        }


}//FIbonacci Series
