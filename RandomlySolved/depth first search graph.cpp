

//this is used using adjacency matrix
#include<bits/stdc++.h>
using namespace std;
int  edges[1001][1001];
bool visited[1001];
void dfs(int start,int n)
{
    cout<<start<<" ";
    visited[start]=1;
    for(int i=1;i<=n;i++)
    {
        if(i==start)
            continue;
        if(edges[start][i]&&visited[i]!=1)
           {
               visited[i]=1;
               dfs(i,n);

           }
    }

}
int main()
{
    int n,e;
    cin>>n>>e;
    memset(visited,false,sizeof(visited));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            edges[i][j]=0;

    }
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        edges[u][v]=1;
        edges[v][u]=1;
    }
   for(int i=0;i<n;i++)
   {
       if(!visited[i])
        {
            dfs(i,n);
            cout<<"\n";
        }
   }

}
