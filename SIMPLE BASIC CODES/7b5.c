#include<stdio.h>
#include<string.h>
void main()
{
        int i=0, j, k, p=0, m=0, n=0;
        char c[500], sub[200], temp[200];
        printf("Enter a line of string:");
        gets(c);
        printf("WOrd to remove:");
        gets(sub);
        m = strlen(c);
        n = strlen(sub);
        while(c[i]!='\0')
        {
                for(j=0; j<n; j++)
                        temp[j] = c[j+i];
                temp[n]='\0';
                if(strcmp(temp,sub)==0)
                {
                        for(k=0; k<n; k++)
                                c[i+k]=' ';
                }
                i++;
        }

        for(i=0; c[i]!='\0'; i++)
                   p++;
        i=0;
        while(c[i]!='\0')
        {
                if(c[i]==' ')
                {
delete:{
                        for(j=i; j<p; j++)
                               c[j]=c[j+1];
                       c[p]='\0';
                       p--;
       }
                }
                if(c[i]==' '&&c[i+1]==' ')
                goto delete;
	       	i++;
        }
        printf("%s",c);
        }//to delete sub string given
