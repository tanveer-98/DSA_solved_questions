//this question is simlar to the islands counting problem
#include<bits/stdc++.h>
using namespace std;
vector<int> lst[100001];
int visited[100001]={0};
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
    int n,e,u,v;
    cin>>n>>e;
    for(int i=1;i<=e;i++)
    {
        cin>>u>>v;
        lst[u].push_back(v);
        lst[v].push_back(u);
    }
    int cc_cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            dfs(i);
            cc_cnt++;
        }
    }
    cout<<cc_cnt;//couts the total no of connected components

    return 0;
}
