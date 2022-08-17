#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    ll n,k;
    cin>>n>>k;
    ll sum=0;
    ll num=n/k;
     if(num>0)
     {
        while(num>0)
        {
         sum=sum+((n*(n+1))/2-k*(num*(num+1))/2);
             n=num;
             num=num/k;
            }
            sum=sum+(n*(n+1))/2;
            cout<<sum<<"\n";


     }
     else
     {
        sum=sum+(n*(n+1))/2;
        cout<<sum<<"\n";
     }

  }




}
