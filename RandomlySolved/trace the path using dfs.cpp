

//this is used using adjacency matrix
#include<bits/stdc++.h>
using namespace std;
int  edges[50][50];//update according to the constraints

bool visited[50];
stack<int> s;
int cnt=0;
int flag=0;
int path[1001];
void dfs(int start,int n,int ed)
{
    if(start==ed)
    {
        flag=1;
        return;
    }
    visited[start]=1;
    for(int i=0;i<n;i++)
    {
        if(i==start)
            continue;
        if(edges[start][i]&&visited[i]!=1)
           {
               visited[i]=1;
               dfs(i,n,ed);
               if(flag==1)
               {
                   path[cnt++]=i;
                   return;

               }

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
    int start,ed;
    cin>>start>>ed;
    if(start==ed)
    {
         cout<<ed;
         return 0;
    }

    dfs(start,n,ed);
   // cout<<"cnt "<<cnt<<" \n";
    if(cnt==0)
    return 0;
    else
    {
        path[cnt]=start;
        for(int i=0;i<=cnt;i++)
            cout<<path[i]<<" ";
    }

}
