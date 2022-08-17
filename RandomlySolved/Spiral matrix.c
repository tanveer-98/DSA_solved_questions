#include<stdio.h>
int main()
{
 int k, n,i,j;
 printf("enter the order of the matrix");
 scanf("%d",&n);
 k=n;
 int arr[n][n];

 printf("enter the input");

 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
      scanf("%d",&arr[i][j]);
  }
 }

 int rstart=0, rend=n, dstart=1, dend=n, lstart=0, lend=n, uend=n-1, ustart=0;
while(n>=3)
{
    //right
    for(j=rstart; j<rend; j++)
    {
        printf("%d ", arr[rstart][j]);
    }
    rstart++;
    rend--;

    printf("\n");
    //down
    for(i=dstart; i<dend; i++)
    {
        printf("%d ", arr[i][dend-1]);
    }
    dstart++;
    dend--;
printf("\n");
    for(j=lend-2; j>=lstart; j--)
    {
        printf("%d ", arr[lend-1][j]);
    }
printf("\n");
    lstart++;
    lend--;

    for(i=uend-1; i>ustart; i--)
    {
        printf("%d ", arr[i][ustart]);
    }
    ustart++;
    uend--;
printf("\n");
    n-=2;

}

printf("%d", arr[k/2][k/2]);

return 0;
}
