#include<stdio.h>
#include<math.h>
void main()
{
       	float a,b,c;
           printf("sides of triangle\n");
           scanf("%f%f%f",&a,&b,&c);
       if((a>=b+c)||(b>=a+c)||(c>=a+b))
     {
             printf("\na triangle cant be formed\n");
     }
           else
     {
           if ((a*a==b*b+c*c)||(c*c==b*b+a*a)||(b*b==c*c+a*a))
             {
             printf("it is a right angled triangle\n");
             }
           if(a==b&&b==c)
             {
             printf("\nthe triangle is equilateral\n");
             }
           if((a*a<b*b+c*c)&&(b*b<a*a+c*c)&&(c*c<a*a+b*b))
             {
             printf("\nthe triangle is acute angled triangle\n");
             }
           if((a*a>b*b+c*c)||(b*b>c*c+a*a)||(c*c>b*b+a*a))
             {
             printf("\nthe triangle is obtuse angled\n");
             }
           if((b==c&&c!=a)||(c==a&&a!=b)||(a==b&&b!=c))
           {
             printf("\n the triangle is isosceles triangle \n");
           }
	   else
           {
             printf("\n the triangle is Scalene \n");
           }
     }
}
