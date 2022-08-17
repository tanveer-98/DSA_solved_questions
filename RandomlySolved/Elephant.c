#include<stdio.h>

int main()
{
    long int x=12;

    long  int T=0;

    if(x==1||x==2||x==3||x==4||x==5)
    {
            printf("1");

    }
     else
       {
            T=T+(x/5)+1;
             printf("%d",T);
       }


      return 0;
}
