#include<stdio.h>
int main()
{
int i,j,k,n=1;
for(i=1;i<5;i++)
{
    for(j=1;j<5-i;j++)
        printf(" ");

    for(j=1;j<=i;j++)
  printf("%d",j);
  n+=2;
  k=j-2;

  for(j=1;j<i;j++)
     {
         printf("%d",k);
       k--;

     }
    printf("\n");
}
return 0;
}
