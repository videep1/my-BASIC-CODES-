#include<stdio.h>
void main()
{
	int a,r1,r2;
	printf("enter the number:");
	scanf("%d",&a);
	if(a>=11&&a<20)
	{switch(a)
		{
			case 11:printf("eleven");
				break;
			case 12:printf("twelve");
				break;
			case 13:printf("thirteen");
			break;
			case 14:printf("fourteen");
			break;
			case 15:printf("fifteen");
			break;
			case 16:printf("sixteen");
			break;
			case 17:printf("seventeen");
			break;
			case 18:printf("eighteen");
			break;
			case 19:printf("nineteen");
			break;
		}
	}	


	else	if(a>0&&a<100)
	{r1=a/10;
	r2=a%10;
	switch(r1)
	{
		case 1:printf("ten");
		      break;
case 2:printf("twenty");
      break;
case 3:printf("thirty");
      break;
case 4:printf("fourty");
      break;
case 5:printf("fifty");
      break ;
case 6:printf("sixty");
      break;
case 7:printf("seventy");
      break;
case 8:printf("eighty");
      break;
case 9:printf("ninty");
      break;
	}
       switch(r2)
       {
  case 1:printf("one");
                      break;
case 2:printf("two");
      break;
case 3:printf("three");
      break;
case 4:printf("four");
      break;
case 5:printf("five");
      break ;
case 6:printf("six");
      break;
case 7:printf("seven");
      break;
case 8:printf("eight");
      break;
case 9:printf("nine");
      break;
       }
	}



	
}
