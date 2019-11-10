#include<stdio.h>
void main()
{
	char a[1000];
	int n;
	printf("enter the time in hh:mm:ss format:");
	scanf("%s",a);
	for(int i=0;a[i]!='\0';i++)
      {
        n=i+1;
      }
	int h=(a[0]-'0')*10+(a[1]-'0');
	int k=(a[3]-'0')*10+(a[4]-'0');
	int l=(a[6]-'0')*10+(a[7]-'0');

	if((h>=0&&h<=23)&&(k>=0&&k<=59)&&(l>=0&&l<=59))
		printf("the time is :%s",a);
          
	
	else
		printf("the time is invalid.try again\n");
}

		
 
