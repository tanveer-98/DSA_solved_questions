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
    fast
    int n;
    cin>>n;
    ll minimum=0;
    ll coordinate[n];
    for(ll i=0;i<n;i++)
    cin>>coordinate[i];
    ll median,median1,median2,minimum1=0,minimum2=0;
    if(n%2!=0)
    {
        median=n/2+1;
        for(ll j=0;j<n;j++)
        {
            if(j!=median)
                minimum+=abs(coordinate[median]-coordinate[j]);

        }
        cout<<median<<endl;
    }
    else
    {
        median1=n/2-1;
        median2=n/2;
        cout<<median1<<" "<<median2<<endl;
        for(ll j=0;j<n;j++)
        {
            if(j!=median1)
                minimum1+=abs(coordinate[median1]-coordinate[j]);
            if(j!=median2)
                minimum2+=abs(coordinate[median2]-coordinate[j]);

        }
        minimum=min(minimum1,minimum2);

    }

    //cout<<minimum;



    return 0;
}
