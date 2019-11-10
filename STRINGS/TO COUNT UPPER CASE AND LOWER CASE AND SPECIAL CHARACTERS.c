#include<stdio.h>
void main()
{
	char a[1000];
        int n,k=0,l=0,m=0;
	printf("enter the string:");
	gets(a);
      for(int i=0;a[i]!='\0';i++)
      {
	      n=i+1;
      }
      
      for(int i=0;i<n;i++)
      {
	      if(a[i]>='a'&&a[i]<='z')
		      k++;
	      else if(a[i]>='A'&&a[i]<='Z')
		      l++;
	      else
		      m++;
      }
      printf("upper case characters count:%d\n",l);
      printf("lower case characters count:%d\n",k);
      printf("special charcters count:%d\n",m);
}
