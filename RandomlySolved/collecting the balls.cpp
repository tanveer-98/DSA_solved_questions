#include<bits/stdc++.h>
#define ll long long int
#define fri(s,e) for(int i=s;i<e;i++)
#define frj(s,e) for(int j=s;j<e;j++)
#define pb push_back
#define mp make_pair
#define pf push_front
#define veci vector<int>
#define vecb vector<bool>
#define f first
#define sec second
#define db double
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
ll sharma=0;
ll ans=INT_MAX;
int findper(ll n,ll k)
{
   // cout<<"candies"<<n<<"\n";
    if(n<k)
        return n;
    else
        return k+findper((n-k)-(n-k)/10,k);
}
ll solve(ll n,int start,int end)
{
   ll mid;
   if(start<=end)
   {
      mid =start + (end -start) / 2;
      //cout<<"mid "<<mid<<"\n";
      // cout<<"start-> "<<start<<" end-> "<<end<<"\n";
      sharma=findper(n,mid);
      //cout<<"sharma"<<sharma<<"\n";
      float per;
      per=(sharma*100)/(float)n;
      //cout<<"\n per  mid="<<per<<" "<<mid<<"\n";
      if(per<(float)50.0)
      {
            sharma=0;
            return solve(n,mid+1,end);
      }
       else
       {
            ans=min(mid,ans);
            if(start==end)
                return ans;
             sharma=0;
             //cout<<"mid"<<mid<<"\n";
             return solve(n,start,mid-1);
       }
   }
}
int main()
{
    ll n;
    cin>>n;
    ll ans=solve(n,1,n);
    cout<<ans<<"\n";
	return 0;
}
