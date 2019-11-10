#include <stdio.h>
struct add
{
        int a, b;
        int sum;
}p;
int add(struct add p)
{
        p.sum = p.a + p.b;
        return p.sum;
}
int main()
{
        printf("Enter a number:");
        scanf("%d",&p.a);
        printf("Enter a number again:");
        scanf("%d",&p.b);
        int val = add(p);
        printf("%d",val);
        return 0;
}

