#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll digit(ll x,int p)
{
    int ans=1;
    for(int i=1;i<=p;i++)
    {

        ans=(ans*x)%10;
    }
    return ans ;
}
void solve(ll x,ll n)
{
    int p;
    if(n==0)
        p=1;
    if(n==1)
        p=1;
    if (n==2)
        p=2;
    if(n==3)
        p=6;
    if(n==4)
        p=4;
    if(n>=5)
        p=0;
    int ld=digit(x,p);
    cout<<ld;
}
int main()
{
    ll x,n;
    cin>>x>>n;
    solve(x,n);
}
