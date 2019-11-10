#include<stdio.h>
void main()
{
        int a,b,result;
	char c;
        printf("enter num1 operator and  num2 you want to operate on:");
        scanf("%d %c%d",&a,&c,&b);
        switch(c)
        {
                case '+':result=a+b;
                       printf("sum of the numbers is:%d",result);
                       break;
                case '-':result=a-b;
                          printf("differnce of the numbers is:%d",result);
                       break;
                case '*':result=a*b;
                       printf("product of the numbers is:%d",result);
                       break;
                case '/':if (b==0)
			       printf("invalid");
		       else
		       { result=a/b;
                       printf("division of the numbers is:%d",result);
		       }
                       break;
        }
}
