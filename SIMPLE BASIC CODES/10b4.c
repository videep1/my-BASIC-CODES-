#include <stdio.h>
#include <string.h>
struct item
{
        int num;
        char name[50];
        int price;
        int quantity;
}a[50];
int main()
{
        int n, dh, i;
        printf("Enter the number of items:");
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
                while(getchar()!='\n');
                printf("Details of item(%d)\n",i+1);
                printf("Enter item name:");
                gets(a[i].name);
                printf("Enter item number:");
                scanf("%d",&a[i].num);
                 printf("Enter item price:");
                scanf("%d",&a[i].price);
                 printf("Enter item quantity:");
                scanf("%d",&a[i].quantity);
                printf("\n");


        }
        printf("\n**List of items with a unit price greater than Rs.129**\n");
        for(i=0; i<n; i++)
                if(a[i].price>129)
                {
                        printf("\nItem name:%s",a[i].name);
                        printf("\nItem number:%d",a[i].num);
                        printf("\nItem price:%d",a[i].price);
                        printf("\nItem quantity:%d",a[i].quantity);
                }
        printf("\n**List of items with quantity in stock less than 5**\n");
        for(i=0; i<n; i++)
                if(a[i].quantity<5)
                {
                        printf("\nItem name:%s",a[i].name);
                        printf("\nItem number:%d",a[i].num);
                        printf("\nItem price:%d",a[i].price);
                        printf("\nItem quantity:%d",a[i].quantity);
                }
        return 0;
}//Supermarket details
