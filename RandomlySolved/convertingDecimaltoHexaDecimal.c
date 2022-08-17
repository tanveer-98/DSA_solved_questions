#include<stdio.h>
int main()
{
    char hd[10];
    int decimal,i=0,rem;

    printf("enter the decimal number\n");
    scanf("%d",&decimal);

    while(decimal>0)
    {
        rem=decimal%16;
        decimal/=16;
        if(rem<=10)
          hd[i]=48+rem;
        else
          hd[i]=55+rem;
         i++;
    }
    hd[i]='\0';
    printf("%s",hd);
    return 0;
}
