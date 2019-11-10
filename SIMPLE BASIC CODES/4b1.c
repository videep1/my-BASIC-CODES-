#include<stdio.h>
#include<ctype.h>
 void main()
{

 char  c;
 printf("enter a character: ");
 c=getchar();
 if(c>='A'&&c<='Z')
        printf("upper case alphabet");
  else if(c>='a'&&c<='z')
        printf("lower case alphabet");
  else if(c>='0'&&c<='9')
        printf(" digit ");
  else
        printf("special character");


}
