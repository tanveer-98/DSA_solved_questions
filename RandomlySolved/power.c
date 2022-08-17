#include<stdio.h>


int sum(int n)
{
    if(n==1)
        return 1;
    else
         return n+sum(n-1);
}
int main()
{
   int sum1,n;
   scanf("%d",&n);
   sum1=sum(n);

 printf("%d",sum1);


    return 0;
}

