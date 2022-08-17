#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define ll long long int
#define fri(s,e) for(ll i=s;i<e;i++)
#define scan(in) scanf("%lld",&in);

int dec_to_bin(int decimal_number)
{
    if (decimal_number == 0)
        return 0;
    else
        return (decimal_number % 2 + 10 *
                dec_to_bin(decimal_number / 2));
}

int bin_to_dec(int bin)
{
  if(bin==0)
    return 0;
  else return bin%10+2*bin_to_dec(bin/10);

}


int main()
{
    double time_spent=0;
    clock_t begin=clock();

    int num;
    printf("enter choice: \n 1.decimal to binary \n 2.binary to decimal.\n");
    int choice;
    scan(choice);

    if(choice==1)
    {
        scan(num)
        printf("binary equivalent:%d",dec_to_bin(num));
    }
    else if(choice==2)
    {
        scan(num)

        printf("decimal equivalent:%d",bin_to_dec(num));
    }
    else
        printf("invalid choice");

    clock_t end=clock();
    time_spent+=(double)(end-begin)/CLOCKS_PER_SEC;
    printf("time:%f",time_spent);
    return 0;
}
