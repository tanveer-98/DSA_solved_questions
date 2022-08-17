#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll sum=(n*(n+1))/2;
        ll times=n/k;
        ll m=1;
        ll i=k;
       for(;times--;m++)
       {
         // cout<<"mk "<<m*k<<"\n";
           if(m*k==k)
           {
            //cout<<1<<" ";
             sum-=(m*k-1);
            }
            else
            {
                if(m%k==0)
                {
                   // cout<<1<<" ";
                    sum-=(m*k-1);
                }
                else
                {
                   // cout<<m<<" " ;
                    sum-=(m*k-m);
                }
            }
           // cout<<"\nsum "<<sum<<"\n";
       }
       cout<<"\n"<<sum<<"\n";

    }





    return 0;
}
//370741
