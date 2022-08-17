#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ll long long int
#define fri(s,e) for(ll i=s;i<e;i++)
#define scan(in) scanf("%lld",&in);
#define print(in) printf("%lld");
ll gcd(ll a,ll b)
{
    if(b==0)
    return a;
    else return gcd(b,a%b);
}
int main()
{
      double time_spent=0;
    clock_t begin=clock();

     int testcase;
     scan(testcase)
     while(testcase--)
     {
        ll num1,num2;
        scan(num1)
        scan(num2)
        printf("%d\n",gcd(num1,num2));
     }
     clock_t end=clock();
    time_spent+=(double)(end-begin)/CLOCKS_PER_SEC;
    printf("time:%f",time_spent);
    return 0;
}
