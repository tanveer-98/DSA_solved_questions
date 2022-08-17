#include<stdio.h>

int SumOfElements(intA[],int size);
{
  int,sum=0;

  for(i=0;i<size;i++)
     {
       sum+=A[i];
     }
     return sum;
}
int main()
{

int A[]={1,2,3,4,5,};
int total=SumOfElements(A,size);
printf("Sum of the elements=%d \n",total);


return 0;
}
