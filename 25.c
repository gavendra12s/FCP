//Matrix multiplication:write a c program to perform multiplication of two 2-D arrays?
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k;
    printf("\n Enter thr first matrix");
    for (i=0; i<3; i++)
     for (j=0; j<3; j++)
     scanf("%d",&a[i][j]);
       printf("\n Enter thr second matrix");
    for (i=0; i<3; i++)
     for (j=0; j<3; j++)
     scanf("%d",&b[i][j]);
      for (i=0; i<3; i++)
      {
        for (j=0; j<3; j++)
        {
            c[i][j]=0;
            for (k=0; k<3; k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][i];
            }
        }

}
printf("\n the result is ... \n");
for (i=0; i<3; i++)
{
     for (j=0; j<3; j++)
     printf("%d",c[i][j]);
     printf("\n");
}
return 0;
}


