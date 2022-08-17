#include<bits/stdc++.h>
using namespace std;
int visited[100001];
vector<int> lst[100001];
void dfs(int node)
{
    visited[node]=1;
    for(int child:lst[node])
    {
        if(!visited[child])
            dfs(child);
    }
}
int main()
{
    int n,m,u,v;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>u>>v;
        lst[u].push_back(v);
        lst[v].push_back(u);
    }
    int cc_cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
            dfs(i),cc_cnt++;
    }
    if(cc_cnt==1&&m==n-1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;

}
