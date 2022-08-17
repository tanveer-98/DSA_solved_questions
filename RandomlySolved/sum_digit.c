#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ll long long int
#define fri(s,e) for(ll i=s;i<e;i++)
#define scan(in) scanf("%lld",&in);
#define print(in) printf("%lld");
int  countdigits(int num)
{
    if(num==0)
    return 0;
    else return num%10+countdigits(num/10);
}
int main()
{
    double time_spent=0;
    clock_t begin=clock();
    int num;
    scan(num)
    printf("no of digits9:%d\n",countdigits(num));


    clock_t end=clock();
    time_spent+=(double)(end-begin)/CLOCKS_PER_SEC;
    printf("time:%f",time_spent);
    return 0;
}
