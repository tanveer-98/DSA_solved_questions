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
/*ll power(ll x,ll y)
{
    ll res=1;
    while(y>0)
    {
        if(y%2==1)
            res=(res*x)%mod;
        x=(x*x)%mod;
        y=y/2;
    }
    return res;
}*/
int main()
{

    int t;cin>>t;
    while(t--)
    {
        ll i;
        ll n;
        cin>>n;
        ll k;

        cin>>k;
        ll arr[n];
        fri(0,n)scanf("%d",&arr[i]);
        if(k>n)
        {
            while(k>0)
            {
                k=k%n;
                if(k>n)
                {
                    for(i=0;i<n;i++)
                    arr[i]=arr[i]^arr[n-1-i];
                }
                else
                {
                    for(i=0;i<k;i++)
                    arr[i]=arr[i]^arr[n-1-i];
                }
                if(k<n)
                k=0;
            }
        }
        else
        {
            for(i=0;i<k;i++)
            arr[i]=arr[i]^arr[n-1-i];
        }
        fri(0,n)printf("%d ",arr[i]);
        printf("\n");
    }


    return 0;
}

