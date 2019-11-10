#include<stdio.h>
#include<string.h>
int main()
{
        char c[200], rev[200];
        int i, length=0;
        printf("Enter a string:");
        gets(c);
         
        length = strlen(c);
        
        for(i=0; i<length; i++)
                rev[i]=c[length-i-1];
        rev[length]='\0';
        if(strcmp(rev,c)==0)
                printf("String is palindrome");
        else
                printf("String is not a palindrome");
        return 0;
}//palindrome or not finding and string reversing
