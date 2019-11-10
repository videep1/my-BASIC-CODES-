#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
 char a[500];
 int n,i,c;
         printf("enter the string :\n");
 gets(a);
n=strlen(a);
c=0;
for(i=0;i<n-1;i++)
{
        if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u')|| (a[i]=='A') 
|| (a[i]=='E') || (a[i]=='I') || (a[i]=='O') || (a[i]=='U'))
{
if((a[i+1]=='a') || (a[i+1]=='e') || (a[i+1]=='i') || (a[i+1]=='o') || (a[i+1]=='u') || (a[i+1]=='A') || (a[i+1]=='E') || (a[i+1]=='I') || (a[i+1]=='O') || (a[i+1]=='U'))
c++;
}
}
if(c==0)
        printf(" no vowel repetition\n");
else
 printf("%d repetition of vowels\n",c);
 }//to find consective ocuurence of vowels

