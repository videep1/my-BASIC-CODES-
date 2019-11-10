#include<stdio.h>
int main()
{
        char c[200];
        int i, n=0, j;//where n is the length of the sentence
        printf("Enter a string:");
        gets(c);
        for(i=0; c[i]!='\0'; i++)
                n++;
        i=0;
        while(c[i]!='\0')
        {
                if(c[i]==' ')
                {
                delete:{
                                for(j=i; j<n; j++)
                                        c[j]=c[j+1];
                                c[n]='\0';
                                n--;
                        }
                        if(c[i]==' ')
                                goto delete;
                }
                i++;
        }
        printf("%s\n",c);
}//to delete extra spaces
                                                
