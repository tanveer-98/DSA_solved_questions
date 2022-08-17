#include<iostream>
using namespace std;
#include<math.h>

bool isprime(int num);
int sum(int num);

int main()
{
    long int a,b,i;
    cin>>a>>b;
    for(i=a;i<=b;i++)
    {
       if(isprime(i))
       {
           if (isprime(sum(i)))
           {
                cout<<i<<" ";
           }

       }

    }
    return 0;
}

bool isprime(int num){
    bool flag=true;
    for(int i = 2; i <= sqrt(num); i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}
int sum(int num)
{
    if(num==0)
    return 0;
    return (num%10+sum(num/10));

}
