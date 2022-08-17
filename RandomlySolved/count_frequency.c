#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ll long long int
#define fri(s,e) for(ll i=s;i<e;i++)
#define scan(in) scanf("%lld",&in);
#define print(in) printf("%lld");
int main()
{

    ll maxsize,maxrange;
    printf("enter the maximum size\n");
    scanf("%lld",&maxsize);
    if(maxsize<=0||maxsize==1)
    {
        printf("not a valid size\n");
        return 0;
    }
    printf("enter the maximum range\n");
    scanf("%lld",&maxrange);
    double time_spent=0;
    clock_t begin=clock();
    ll *number,*frequency;
    number=(ll *)malloc(maxsize*sizeof(ll));
    frequency=(ll*)malloc(maxrange*sizeof(ll));
    fri(0,maxsize)
    number[i]=rand()%maxrange;

    printf("\n");
    fri(0,maxrange)
    frequency[i]=0;
    fri(0,maxsize)
    frequency[number[i]]++;
    fri(0,maxrange)
    printf("the frequency of the number %lld is: %lld\n",i,frequency[i]);
    clock_t end=clock();
    time_spent+=(double)(end-begin)/CLOCKS_PER_SEC;
    printf("the time spent is:%f",time_spent);
    return 0;
}
