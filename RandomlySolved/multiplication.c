#include<stdio.h>
int main()
{
int i,j,k;
int arr1[2][3],arr2[3][2],arr3[2][2];
for(i=0;i<2;i++)
   for(j=0;j<3;j++)
     scanf("%d",&arr1[i][j]);

for(i=0;i<3;i++)
   for(j=0;j<2;j++)
     scanf("%d",&arr2[i][j]);


//multiplication

for(i=0;i<2;i++)
   {

        for(j=0;j<2;j++)
            {
                 arr3[i][j]=0;
                 for(k=0;k<3;k++)
                    {
                        arr3[i][j]+=arr1[i][k]+arr2[k][j];
                    }
            }
    }
//printing
 for(i=0;i<2;i++)
   {
       for(j=0;j<2;j++)
            printf("%d  ",arr3[i][j]);
    printf("\n");

   }
return 0;
}
