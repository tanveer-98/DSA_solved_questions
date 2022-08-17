#include<stdio.h>
int fibo(int );
 int main(){
int num,i;
printf("enter the number of term ");
scanf("%d",&num);
printf("the series is \n");
for(i=0;i<num;i++)
 printf("%d",fibo(i));
printf("\n");
return 0;
}
 int fibo(int n)
 {
  if(n==0||n==1)
     return 1;
 else return (fib0(n-1)+fibo(n-2));
 }
