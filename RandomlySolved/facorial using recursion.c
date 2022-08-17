#include<stdio.h>

int fact(int n)
{
 int F;
 printf("i am calculating n=%d\n",n);
 if(n==0)
   {
     return 1;
   }
  else
     return n*fact(n-1);
}
int main()
{
int n,factorial;
scanf("%d",&n);


factorial=fact(n);
printf("the factorial of the number is %d",factorial);
return 0;
}
