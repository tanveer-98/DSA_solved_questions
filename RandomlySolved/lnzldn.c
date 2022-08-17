#include<stdio.h>
#define taxrate 12
#include<math.h>

int main()
{
    float p,t;
    float SI,CI;
    printf("enter the principle and time\n");

    scanf("%f %f",&p,&t);

    SI=(p*taxrate*t)/100;
    CI=p*pow(1+(taxrate/100),t);
    printf("simple interest and compound interest:%f , %f",SI,CI);


    return 0;

}
