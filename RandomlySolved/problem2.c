#include<stdio.h>
int main()
{
   int b,i,j=0;
    scanf("%d",&b);
    for(i=0;i<=b;i++)
   {
        if(b%i==0)
            j++;
   }
   printf("%d",j);
   return 0;
}
