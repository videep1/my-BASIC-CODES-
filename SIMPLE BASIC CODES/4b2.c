#include<stdio.h>
#include<math.h>
void main()
{
        int a,b,c,d;
        float x1,x2;
        printf("Enter value of a,b,c;");
        scanf("%d %d %d",&a,&b,&c);
        d=b*b-4*a*c;
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        if(d>0)
                printf("roots are real and distinct:%f %f",x1,x2);
        else if (d==0)
                printf("roots are equal:%f ",x1);
        else
                printf("roots are imaginary:");


}
