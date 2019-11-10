#include<stdio.h>
void main()
{
        int r1, c1, r2, c2, i, j;
        printf("Enter the rows and columns of first matrix:");
        scanf("%d %d",&r1,&c1);
        int a[r1][c1];
        printf("Enter the elements of first matrix\n");
        for(i=0; i<r1; i++)
        {
                for(j=0; j<c1; j++)
                        scanf("%d",&a[i][j]);
        }

         printf("Enter the rows and columns of second matrix:");
         scanf("%d %d",&r2,&c2);
         int b[r2][c2];
         printf("Enter the elements of second matrix\n");
         for(i=0; i<r2; i++)
         {
                 for(j=0; j<c2; j++)
                         scanf("%d",&b[i][j]);
         }
        //Addition:
        if(r1==r2 && c1==c2)
        {
                printf("Added matrix is :\n");
                int c[r1][c2];
                for(i=0; i<r1; i++)
                {
                        for(j=0; j<c1; j++)
                        {
                                c[i][j]=a[i][j]+b[i][j];
				printf("%d ",c[i][j]);
                        }
                        printf("\n");
                }
        }
        else
                printf("Addition of two matrices is not possible\n");

        //Multiplication :
                if(c1==r2)
                {
                        int d[r1][c2], k;
                        for(i=0; i<r1; i++)
                                for(j=0; j<c2; j++)
                                        d[i][j]=0;
                        for(i=0; i<r1; i++)
                        {
                                        for(k=0; k<c2; k++)
                                        {
                                                for(j=0; j<r2; j++)
                                                {
                                                        d[i][k]+=a[i][j]*b[j][k];
                                                }

                                        }



                        }
                        printf("Multiplied matrix is:\n");
                        for(i=0; i<r1; i++)
                        {
                                
                                for(j=0; j<c2; j++)
                                        printf("%d ",d[i][j]);
                                printf("\n");
                        }

                }
                else
                        printf("Multiplication is not possible");
               


}
