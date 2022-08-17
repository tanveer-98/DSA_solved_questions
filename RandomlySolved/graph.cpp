#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll c=0;
bool visited[1000+1];
vector<ll> adj[1000+1];
void noofcycles(int  u, int p=-1)
{
    visited[u]=true;
    for(ll i=0;i<adj[u].size();i++)
    {
        if(adj[u][i]==p)
            continue;
        if(!visited[adj[u][i]])
            noofcycles(adj[u][i],u);
        else c++;
    }

}
int  main()
{
    int n;
    cout<<"enter the number of vertices";
    cin>>n;

    ll e;
    cin>>e;
    memset(visited,false,sizeof(visited));
    while(e--)
        {
           ll a,b;
           cin>>a>>b;
           adj[a].push_back(b);
           adj[b].push_back(a);
        }

    noofcycles(1,-1);
    cout<<c;


    return 0;
}
