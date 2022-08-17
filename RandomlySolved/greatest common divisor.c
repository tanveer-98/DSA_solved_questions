#include<stdio.h>
int GCD(int ,int );
int main(){
int num1,num2;
printf("enter the number \n");
scanf("%d%d",&num1,&num2);
printf("the greatest common divisor is : ");
 GCD(num1,num2);
 return 0;
 }
int GCD(int a,int b)
 {
 if(b==0)
 { printf("%d",a);
    return 0;
 }

else {
return GCD(b,a%b);}
  }
