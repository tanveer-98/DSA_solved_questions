#include<bits/stdc++.h>
#define ll long long int
#define fri(s,e) for(ll i=s;i<e;i++)
#define frj(s,e) for(ll j=s;j<e;j++)
#define pb push_ back
#define pf push_front
#define f first
#define sec second
#define db double
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nl printf("\n")
#define gc getchar
inline ll getn(){
 ll n = 0, c = gc();
	while(c < '0' || c > '9') c = gc();
	while(c >= '0' && c <= '9')
		n = (n<<3) + (n<<1) + c - '0', c = gc();
	return n;
}
using namespace std;
/*l power(ll x,ll y)
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
    int t;
    cin>>t;
    while(t--)
    {
        ll count=0;

        ll m,n,i,j;
       m=getn();
       n=getn();
       ll valx[m+1]={0};
       ll valy[n+1]={0};
        ll q ;
        q=getn();
        vector<ll>
        while(q--)
        {
           ll x,y,i;cin>>x>>y;
           valx[x]++;
           valy[y]++;

        }
        //traverse the coordinate array
        for(i=1;i<=m;i++)
            if(valx[i]!=0)
                for(j=1;j<=n;j++)
                    arr[i][j]+=valx[i];
         for(i=1;i<=n;i++)
            if(valy[i]!=0)
                for(j=1;j<=m;j++)
                    arr[j][i]+=valy[i];
        fri(1,m+1)
        frj(1,n+1)
        if(arr[i][j]&1)
            count++;

        printf("%lld",count);
        nl;

    }


    return 0;
}

