#include<stdio.h>
int display(int n)
 {  int sum;
  if(n==0)
  return 0;
sum= n + display(n-1);
  printf("%d+ ",n);
 return sum;
 }





int main()
 {
  int j,n;
  printf("enter the n0,");
  scanf("%d",&n);
  j=display(n);

 printf("\nsum=%d ",j);


 return 0;

 }
