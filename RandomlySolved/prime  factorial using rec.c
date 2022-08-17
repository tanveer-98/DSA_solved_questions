#include<stdio.h>
int prime(int );
int main(){
int num;
printf("enter the number\n");
scanf("%d",&num);
printf("the prime factorials are\n");
prime(num);
return 0;
}
int prime(int num)
{
int i=2;
if(num==1)
    return 1;
while(num%i!=0)
i++;
printf("%d\n",i);
return  prime(num/i);
 }
