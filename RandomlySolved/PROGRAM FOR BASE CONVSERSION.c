#include<stdio.h>
void conversion(int,int );
int main()
{


    conversion(126,2);
    printf("\n");

    conversion(126,16);
    printf("\n");
    conversion(126,8);

    return 0;
}
void conversion(int num,int base)
{
    int rem;
    rem=num%base;

    if(num==0)
        return ;
    conversion(num/base,base);

    if(rem<10)
        printf("%d",rem);
    else
        printf("%c",rem-10+'A');

}
