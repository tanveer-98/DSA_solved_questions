#include<stdio.h>
int main()
{

int year;

scanf("%d",&year);

if((year%100!=0&&year%4==0)||year%400==0)
printf("the year is leap year");
else
printf("the year is not leap year");



return 0;
}
