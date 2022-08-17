#include<bits/stdc++.h>
#define ll long long int
#define fri(s,e) for(int i=s;i<e;i++)
#define frj(s,e) for(int j=s;j<e;j++)
#define pb push_ back
#define pf push_front
#define f first
#define sec second
#define db double
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
      int n,k;
      cin>>n>>k;
      int time[n+1],data[n+1];
      ll total=0;

      fri(1,n+1)
      cin>>time[i]>>data[i];
      fri(1,n+1)
      {
          if(time[i]>k)
          time[i]-=k;
          else time[i]=0;

      }
      for(int i=1;i<=n;i++)
      total+=(time[i]*data[i]);
      cout<<total<<endl;
    }


    return 0;
}
