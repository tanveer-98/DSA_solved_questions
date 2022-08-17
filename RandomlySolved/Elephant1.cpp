#include<stdio.h>

int main()
{
    long int x=1;

    long  int Total_Steps=0;

    if(x=1||x==2||x==3||x==4||x==5)
    {
            printf("1");
    }
     else
       {
            Total_Steps+=(x/5);
            Total_Steps+=1;
       }
      printf("%d",Total_Steps);

      return 0;
}
