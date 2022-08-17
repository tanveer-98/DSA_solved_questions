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
ll candies_sharma_got(ll n,ll k)
{
   // cout<<"candies"<<n<<"\n";
    if(n<k)
        return n;
    else
        return k+candies_sharma_got((n-k)-(n-k)/10,k);
}
ll solve(ll n,int start,int end)
{
   ll mid,sharma;
   float per;
   ll minimum=INT_MAX;
   while(start<=end)
   {
       mid=start+(end-start)/2;
       sharma=candies_sharma_got(n,mid);
       //percentage of total candies sharma got
       per=(sharma*100)/n;
       if(per<(float)50.0)
       {
           start=mid+1;
       }
       else
       {
           minimum=min(minimum,mid);
           end=mid-1;

       }
   }
   return minimum;
}
int main()
{
    ll n;
    cin>>n;
    ll ans=solve(n,1,n);
    cout<<ans<<"\n";
	return 0;
}
