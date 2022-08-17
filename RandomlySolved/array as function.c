#include<stdio.h>
int soa(int* A,int size)
 {
  int sum=0,i;
  for(i=0;i<size;i++)
  {
  sum+=*(A+i);
  printf("the arrays %d\n",*(i+A));}
  return sum;
}

int main(){
int A[]={1,3,5,6};
int size=sizeof(A)/sizeof(A[0]);
int sum=soa(A,size);
printf("the sum of the array is %d",sum);
return 0;
}
