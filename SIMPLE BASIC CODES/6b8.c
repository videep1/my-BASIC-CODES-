#include<stdio.h>
void main()
{
        int temp, r, c, i, j;
        printf("Enter the number of rows of matrix:");
        scanf("%d",&r);
        printf("Enter the number of columns of matrix:");
        scanf("%d",&c);
        int a[r][c];
        printf("Enter the elements of matrix:\n");
        for(i=0; i<r; i++)
                for(j=0; j<c; j++)
                        scanf("%d",&a[i][j]);
        if(r!=c)
                printf("There are no diagonal elements or interchange is not possible\n");
        else
        {
                for(i=0; i<r; i++)
                {
                        temp=a[i][i];
                        a[i][i]=a[i][r-i-1];
                        a[i][r-i-1]=temp;

                }
                printf("Changed matrix is:\n");
                for(i=0; i<r; i++)
                {
                        for(j=0; j<c; j++)
                        {
                                printf("%d ",a[i][j]);
                        }
                        printf("\n");
			  }

        }
      
}
