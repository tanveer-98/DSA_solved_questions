#include<stdio.h>
int main()
{
int i,j,k,n=1;
for(i=1;i<5;i++)
{
    for(j=1;j<5-i;j++)
        printf(" ");
    n=i;
    for(j=1;j<=i;j++)
  printf("%d",n++);

  n=n-2;

  for(j=1;j<i;j++)
     {
         printf("%d",n);
       n--;

     }
    printf("\n");
}
return 0;
}
