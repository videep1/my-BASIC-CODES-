#include<stdio.h>
#include<string.h>
void camp(char a[],char b[])
{
 for(int i=0; a[i]!='\0'; i++)
        {
                if(a[i]>='a'&&a[i]<='z')
                        a[i]+=-32;
               
        }
 for(int i=0; b[i]!='\0'; i++)
        {
                if(b[i]>='a'&&b[i]<='z')
                        b[i]+=-32;
        }
int k=strcmp(a,b);
	if(k==0)
		printf("strings are  same");
	else
	printf("strings are not same");
}
void main()
{
	char a[100],b[100];
	printf("enter first string:");
	gets(a);
	printf("enter second string:");
	gets(b);
	camp(a,b);
}
