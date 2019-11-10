#include<stdio.h>
struct book
{
        char name[50];
        char author[50];
        int isbn;
        int price;
};
void  main()
{
        struct book b1;
        printf("Enter name of the book:");
        scanf("%s",b1.name);
        printf("Enter name of the author:");
        scanf("%s",b1.author);
        printf("Enter isbn number:");
        scanf("%d",&b1.isbn);
        printf("Enter price of the book:");
        scanf("%d",&b1.price);
        printf("Name of the book entered is:%s",b1.name);
        printf("\nName of the author is %s",b1.author);
        printf("\nISBN of the book is %d",b1.isbn);
        printf("\nPrice of the book:%d",b1.price);
}//Book inflormation  Display:
