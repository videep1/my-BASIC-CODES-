#include <string.h>
char b[100];
void length(char a[])
{
        printf("The length of the string is %lu",strlen(a));
}
void copy(char a[])
{
        strcpy(b, a);
        printf("The new string is %s",b);
}
void compare(char a[], char b[])
{
        int p;
        if(strcmp(a, b)==0)
                printf("Same strings");
        else
                printf("Strings are different");
}

int main()
{
        int choice ;
        char a[100];
        printf("Enter a choice:\n1.Length of the string\n2.Copy string to the other\n3.Compare two strings\n");
        scanf("%d",&choice);
        while(getchar()!='\n')
                ;
        switch(choice)
        {
                case 1 :printf("Enter a string");
                        gets(a);
			 length(a);
                        break;
                case 2 :printf("Enter a string");
                        gets(a);
                        copy(a);
                        break;
                case 3 :printf("Enter first string");
                        gets(a);
                        printf("Enter second string");
                        gets(b);
                        compare(a, b);
                        break;

        }
        return 0;
}//String functions
