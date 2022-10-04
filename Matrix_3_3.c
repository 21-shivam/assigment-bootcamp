#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],k,i,j;
    printf("Enter first matrix is:");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
        scanf("%d",&a[i][j]);
        printf("Enter second matrix is:");
        for(i=0;i<=2;i++)
            for(j=0;j<=2;j++)
            scanf("%d",&b[i][j]);
            printf("Matrix is:\n");
           for(i=0;i< 3;i++)
             {
                for(j=0;j< 3;j++)
              {
                  c[i][j] = 0;
                      for(k=0;k< 3;k++)
                   {
              c[i][j] =a[i][k]*b[j][k];
                  }
               }
             }
           for(i=0;i<=2;i++)
           {
               for(j=0;j<=2;j++)
               {
                printf("%d\t",c[i][j]);
               }
               printf("\n");
           }
           return 0;
}
