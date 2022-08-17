#include<bits/stdc++.h>
#define ll long long int
#define fri(s,e) for(int i=s;i<e;i++)
#define frj(s,e) for(int j=s;j<e;j++)
#define pb push_back
#define pf push_front
#define f first
#define sec second
#define db double
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
ll E=0;
ll O=0;
vector<int> myvec;

ll convertbinary(ll dec)
{
    if(dec==0)
    return 0;
    else
    return (dec%2+(10*convertbinary(dec/2)));
}
ll sum_of_digit(ll n)
{
    if (n == 0)
       return 0;
    return (n % 10 + sum_of_digit(n / 10));
}



int main()
{
    fast
    int Q;cin>>Q;
    int i=1;
    ll size=0;
    while(i<=Q)
    {
        ll x;
        cin>>x;
        if(i==1)
        {
        myvec.pb(x);

        }
        else
        {
            myvec.pb(x);
            size=myvec.size();
            for(ll j=0;j<size-1;j++)
            {
                myvec[j]=myvec[size-1]^myvec[j];
            }

        }
        cout<<endl;
      for(ll j=0;j<myvec.size();j++)
        cout<<myvec[j]<<" ";
        cout<<endl;
        for(ll i=0;i<myvec.size();i++)
    {
        ll bin=convertbinary(myvec[i]);
        if(sum_of_digit(bin)%2==0)
        E++;
        else
        O++;

    }



     //cout<<E<<" "<<O<<endl;
      E=0;
      O=0;
      i++;
  }
 return 0;
}
