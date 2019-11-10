#include<stdio.h>
  void main()
{
        float marks;
        int index;
        printf("enter the marks obtained by the student:");
        scanf("%f",&marks);
        index = marks/10;
        switch(index)
        {
                case 10 :
                case 9 :
                        printf("A+");
                        break;
           case 8 :
                   printf("A");
                        break;
             case 7 :
        printf("B");
                        break;
              case 6:
           printf("C");
                        break;

           case 5 :
        printf("D");
                        break;
     case 4 :
        printf("E");
                        break;
        default :
        printf("Fail");
        }
} 
