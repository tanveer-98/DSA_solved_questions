#include<stdio.h>
int fibo(int );
int main()
 {
 int n,i;
 printf("enter the numner of term");
 scanf("%d",&n);
 printf("the series is ");
 for(i=0;i<n;i++)
 printf("%d\n",fibo(i));
 printf("\n");
 return 0;
}
 int fibo(int i)
 {
  if(i==0||i==1)
  return 1;
  else return (fibo(i-1)+fibo(i-2));
 }
