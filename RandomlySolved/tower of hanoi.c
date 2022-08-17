#include<stdio.h>

void tower(int n,char source,char aux,char dest)
{
   if(n==1)
   {
       printf("Move the disk from tower no:%c to tower no:%c\n",source,dest);
       return;
   }

     tower(n-1,source,dest,aux);
     tower(1,source,aux,dest);
     tower(n-1,aux,source,dest);
}
int main()
{
    tower(3,'A','B','C');//no of disk,rod1,rod2,rod3

    return 0;
}
