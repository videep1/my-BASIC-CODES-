#include<stdio.h>

typedef struct{
int feet;
int inch;
}dist;

typedef struct{
int real;
int img;
}comp;

typedef struct{
int hr;
int min;
int sec;
}time;

int modif(int a,int b)
{
        if(a>b) return a-b;
        else if(a<b) return b-a;
        else return 0;
}

comp add(comp *c1,comp *c2)
{
    comp c;
    c.real=c1->real+c2->real;
    c.img=c1->img+c2->img;
    return c;
}

void main()
{
        int m;
        printf("Enter 1 to add distances\n2 to add complex numners\n3 to subtract time periods:  ");
        scanf("%d",&m);
        if(m==1)
        {
          dist d1,d2,d;
          printf("Enter feet and inch for 1st distance:  ");
          scanf("%d %d",&d1.feet,&d1.inch);
          printf("Enter feet and inch for 2nd distance:  ");
          scanf("%d %d",&d2.feet,&d2.inch);
          d.feet=d1.feet+d2.feet;
          d.inch=d1.inch+d2.inch;
          while(d.inch>=12)
          {
             d.inch=d.inch-12;
             d.feet=d.feet+1;
          }
                 printf("Sum of distances is:%d feet and %d inch\n",d.feet,d.inch);
        } else if(m==2)
        {
          comp c1,c2,c;
          printf("Enter real and imag part of 1st complex no:  ");
          scanf("%d %d",&c1.real,&c1.img);
          printf("Enter real and imag part of 2nd complex no:  ");
          scanf("%d %d",&c2.real,&c2.img);
          c=add(&c1,&c2);
          printf("Result: %d + %di",c.real,c.img);
        }
        else if(m==3)
		{
                 time t1,t2,t;
                printf("Enter hour, min and sec for 1st time period:  ");
                scanf("%d %d %d",&t1.hr,&t1.min,&t1.sec);
                printf("Enter hour, min and sec for 2nd time period:  ");
                scanf("%d %d %d",&t2.hr,&t2.min,&t2.sec);
                t.hr=modif(t1.hr,t2.hr);
                t.min=modif(t1.min,t2.min);
                t.sec=modif(t1.sec,t2.sec);
                printf("Difference of time periods: %d hours %d min %d sec\n",t.hr,t.min,t.sec);
        }

}//Menu driven program
