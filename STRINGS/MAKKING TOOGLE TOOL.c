#include<stdio.h>
void main()
{
	char a[1000];
	int n;
 printf("enter the string:");
        gets(a);
      for(int i=0;a[i]!='\0';i++)
      {
              n=i+1;
      }
for(int i=0;i<n;i++)
{
if(a[i]>='a'&&a[i]<='z')
a[i]=a[i]-32;
else if(a[i]>='A'&&a[i]<='Z')
	a[i]=a[i]+32;
}
printf("the string after togle case:%s",a);
}
