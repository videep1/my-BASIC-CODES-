#include <stdio.h>
#include <string.h>
struct info
{
        char name[50];
        char address[50];
        int number;

}a[5];
int main()
{
        int i, k, dh, tempnum = 0;
        printf("*** Enter the data of 5 people ***\n");
        for(i=0; i<5; i++)
        {
                printf("Enter person %d's name:",i+1);
                gets(a[i].name);
                printf("Enter person %d's address:",i+1);
                gets(a[i].address);
                printf("Enter person %d's telephone number:",i+1);
                scanf("%d",&a[i].number);
                while((dh = getchar())!='\n')
                        ;
         }
        char c[50];
        printf("\nEnter the name:");
        gets(c);
        for(k=0; k<5; k++)
        {
                if(strcmp(c,a[k].name)==0)
                {
                         printf("\nName of the person is :%s",a[k].name);
                         printf("\nAddress of the person is %s",a[k].address);
                         printf("\nTelephone number of the person is %d",a[k].number);
                         break;
                 }
         }
        if(k == 5)
                printf("\nPerson not found");
        return 0;
}
