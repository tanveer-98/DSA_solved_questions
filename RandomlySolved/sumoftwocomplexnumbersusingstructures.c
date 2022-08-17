//find the sum of two complex numbers
#include<stdio.h>
struct com{
  float realPart;
  float complexPart;
}num1,num2;
float sum(struct com num1,struct com num2)
{
   return num.+num2;
}
int main()
{
    float sumReal,sumComplex;

    scanf("%f",&num1.realPart);
    scanf("%f",&num1.complexPart);
    scanf("%f",&num2.realPart);
    scanf("%f",&num2.complexPart);

    sumReal=sum(num1,num2);
    sumComplex=sum(num1,num2);

    printf("the sum of both the complex numbers is: %f+%f i",sumReal,sumComplex);

    return 0;
}
