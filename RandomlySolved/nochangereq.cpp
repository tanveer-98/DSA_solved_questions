#include<bits/stdc++.h>
#define ll long  int
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
void solve(ll anew[],ll n,ll p)
{
    ll coins[n];
    memset(coins,0,sizeof(coins));
    int q,i;
    for(i=n-1;i>=0;i--)
    {
        if(p%anew[i]!=0)
        {
            coins[i]=p/anew[i]+1;
            break;
        }
        q=p/anew[i];
        coins[i]=q-1;
        p-=((q-1)*anew[i]);
    }
    if(i==-1)
    {
        if(p%anew[0]==0)
            cout<<"NO";

    }
    else
    {
        cout<<"YES";
        for(int j=0;j<n;j++)
            cout<<" "<<coins[j];
    }


}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n,p,i,k;
        cin>>n>>p;
        ll arr[n];
        fri(0,n)cin>>arr[i];
        fri(0,n)
        {
            if(p%arr[i]!=0)
                break;
        }
        if(i==n)
        {
            //all values are factors
            if(n==1)
            {
                    cout<<"NO"<<endl;
}
            else if(n==2 && min(arr[0],arr[1])==1)
                {
                    cout<<"NO"<<endl;
                    }
            else
            {
                solve(arr,n,p);
            }
        }
        else{
             //there is a coin which is not factor
            ll coins[n];
            memset(coins,0,sizeof(coins));
            coins[i]=p/arr[i]+1;
            cout<<"YES ";
            for(i=0;i<n;i++)
            cout<<coins[i]<<" ";
        }

    }

    return 0;
}
