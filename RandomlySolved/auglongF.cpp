#include<bits/stdc++.h>

#define mod 1e9+7
using namespace std;

typedef long long ll;
const int maxn = 1e2 + 14, lg = 15;


map<ll,bigint> dp;
void preprocess()
{
    dp[1]=1;
    bigint result=1;
    for(int i=2;i<=100000;i++)
    {
        result=(result*2LL);
        dp[i]=result%mod;
    }
}
int main()
{
  int t;
  cin>>t;
  preprocess();
  while(t--)
  {
      ll n;
      cin>>n;
      ll x;
      for(int i=0;i<n;i++)
      {
            cin>>x;
            cout<<dp[n-x+1]<<" ";

      }
      cout<<"\n";
  }
return 0;
}
