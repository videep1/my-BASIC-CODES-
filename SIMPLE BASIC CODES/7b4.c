#include<stdio.h>
int main()
{
        char c[200];
        int i;
        printf("Enter a string:");
        gets(c);
        for(i=0; c[i]!='\0'; i++)
        {
                if(c[i]>='a'&&c[i]<='z')
                        c[i]+=-32;
                else if(c[i]>='A'&&c[i]<='Z')
                        c[i]+=32;
        }
        printf("New string is:%s",c);
        return 0;
}//to convert lowercase to upper vice verse
