#include<iostream>
using namespace std;
class gfg
{
 public: int sumDigits(int no)
 {
   return no == 0 ? 0 : no%10 + sumDigits(no/10) ;
 }
};


int main()
{
    gfg g;
    int a;
    cin>>a;
    for(int i=a;i<=1003;i++)
    {
    int sum=g.sumDigits(i);
    if(sum%4==0)
    {
    cout<<i<<endl;
    break;
    }
    }

    return 0;
}
