#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll sum=floor((n*(n+1))/2);
        //cout<<sum<<endl;
        ll ans =sum-floor(n*(n/k+1)/2);
        //cout<<ans<<endl;
        ans=ans+floor((n*(floor(n/k)+1))/(2*k));
        //cout<<ans<<endl;
        ans+=floor((n/(k*k)));
        //cout<<ans<<endl;
        ans-=floor((n*(floor(n/(k*k))+1))/(2*k));
        cout<<ans<<"\n";
    }

    return 0;
}
