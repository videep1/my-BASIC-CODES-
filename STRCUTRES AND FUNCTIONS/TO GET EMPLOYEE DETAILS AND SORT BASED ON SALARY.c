#include <stdio.h>
struct employee
{
        char name [25] ;
        int age;
        int basic;
        float total;
}a[5];
void flush()
{
        while(getchar()!='\n');
}
int main()
{
        int i;
        for(i = 0; i<5; i++)
        {
                printf("Enter employee[%d]'s details\n",i+1);
                printf("Enter name:");
                gets(a[i].name);
                printf("Enter age:");
                scanf("%d",&a[i].age);
                printf("Enter basic salary:");
                    scanf("%d",&a[i].basic);
                a[i].total = 0.1*a[i].basic + 0.05*a[i].basic + a[i].basic;
                flush();
        }
        int t;
        float array[5];
        for(i=0; i<5;i++)
                array[i]=a[i].total;
        int n, c, d, position;
        float swap;
        n = 5;
        for (c = 0; c < (n - 1); c++)
        {
                position = c;
                for (d = c + 1; d < n; d++)
                {
                        if (array[position] > array[d])
                                position = d;
                }
                if (position != c)
                {
                        swap = array[c];array[c] = array[position];
                        array[position] = swap;
                }
        }
                        for(int j=0; j<5; j++)
                {
                        printf("%s\t",a[j].name);
                        printf("%d\t",a[j].age);
                        printf("%f",a[j].total);
                        printf("\n");
                }
                        printf("\n");

        for(i=4;i>=0;i--)
        {
                for(int j=0; j<5; j++)
                if(array[i] == a[j].total)
                {
                        printf("%s\t",a[j].name);
                        printf("%d\t",a[j].age);
                        printf("%f",a[j].total);
                    printf("\n");
                }
        }
        return 0;
} 
