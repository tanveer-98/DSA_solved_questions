#include<bits/stdc++.h>
#define ll long long
using namespace std;
int  main()
{
    int n;
    cout<<"enter the number of vertices";
    cin>>n;
    vector<ll> adj[n+1];
    ll e;
    cin>>e;
    while(e--)
        {
           ll a,b;
           cin>>a>>b;
           v[a].push_back(b);
           v[b].push_back(a);
        }


    return 0;
}
