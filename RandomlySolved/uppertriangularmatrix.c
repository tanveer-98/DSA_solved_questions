#include<stdio.h>
int main()
{
int mat[4][4];
printf("enter the elements of the matrix.\n");
for(int i=0;i<4;++i)
    for(int j=0;j<4;++j)
        scanf("%d",&mat[i][j]);
printf("the upper triangular matrix is.\n");

for(int i=0;i<4;++i)
   {
     if(i>=1)
        for(int k=1;k<=i;++k)
           printf(" ");

    for(int j=i;j<4;++j)
        printf("%d",mat[i][j]);

        printf("\n");

    }
return 0;
}
