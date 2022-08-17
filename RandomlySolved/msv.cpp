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


        int n;

        cin>>n;
        ll arr[n];
        ll k;
        cin>>k;

        fri(0,n)cin>>arr[i];

        if(n%2==0)
        {
            k=k%(3*n);
            for(ll i=0;i<=k-1;i++)
            {
                arr[i%n]=arr[i%n]^arr[n-1-(i%n)];
            }
        }
        else
        {
            if(k>=(n+1)/2)
            {
                arr[(n-1)/2]=0;
                k=k%(3*n);
                for(ll i=0;i<=k-1;i++)
                {
                    arr[i%n]=arr[i%n]^arr[n-1-(i%n)];
                }
            }
            else
            {

                 for(ll i=0;i<=k-1;i++)
                {
                    arr[i%n]=arr[i%n]^arr[n-1-(i%n)];
                }
            }
        }
        fri(0,n)
        cout<<arr[i]<<" ";
        cout<<endl;
    }

    return 0;
}

