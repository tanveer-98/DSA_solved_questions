#include<stdio.h>

int series(int n);

int main()
{
    int n,sum;
    printf("enter the number of terms you want the sum for.\n");

    scanf("%d",&n);

    sum=series(n);

    printf("=%d",sum);


    return 0;
}

int series(int n)
{
   int sum;

   if(n==0)
    return 0;

   sum=n+series(n-1);
   printf("%d+",n);


   return sum;
}
