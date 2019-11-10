#include<stdio.h>
void main()
{
	char a[1000];
	int n;
	printf("enter the string:");
	scanf("%s",a);
	for(int i=0;a[i]!='\0';i++)
	{
		n=i+1;
	}
	for(int i=0;i<n;i++)
	{
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
			a[i]=' ';
	}
    int	 i=0,j=0;
        while(a[i]!='\0')
        {
                if(a[i]==' ')
                {
                delete:{
                                for(j=i; j<n; j++)
                                        a[j]=a[j+1];
                                a[n]='\0';
                                n--;
                        }
                        if(a[i]==' ')
                                goto delete;
                }
                i++;
        }
        printf("the new string:%s\n",a);

}

