#include<stdio.h>
int expo(int ,int );
int main(){
int num,pow;
printf("enter the value of number and power");
scanf("%d%d",&num,&pow);
expo(num,pow);
return 0;
}
int expo(int num,int pow)
 {
if(pow==0)
 { printf("the number after using power is %d",num);
 return 1;
}
else return expo(num*=num,pow-=1);


}
