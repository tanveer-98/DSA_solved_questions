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
ll power(ll x,ll y)
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
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll count=0;

        int m,n;
        cin>>m>>n;
        int q ;
        cin>>q;
        int arr[m+1][n+1];
        for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
        {
            arr[i][j]=0;
        }
        while(q--)
        {
            int x,y,i;cin>>x>>y;
            for(i=1;i<=m;i++)
            arr[i][y]++;
            for(i=1;i<=n;i++)
            arr[x][i]++;

        }
        for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
        {
            if(arr[i][j]%2!=0)
            count++;
        }
        cout<<count<<endl;

    }


    return 0;
}

