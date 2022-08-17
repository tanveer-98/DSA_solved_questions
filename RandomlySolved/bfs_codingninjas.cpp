//breadth first search  using adjacency list
#include<bits/stdc++.h>
using namespace std;
int edges[50][50];
bool visited[50]={0};
void bfs(int start ,int n)
{
    queue<int>q;
    q.push(start);
    visited[start]=1;
    while(!q.empty())
    {
        int currvertex=q.front();
        q.pop();
        cout<<currvertex<<" ";
        for(int i=0;i<n;i++)
        {
            if(edges[currvertex][i]==1&&!visited[i])
            {
            q.push(i);
            visited[i]=1;
            }
        }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    memset(edges,0,sizeof(edges));
    for(int i=1;i<=e;i++)
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
            bfs(i,n);
        }
    }
    return 0;


}
/*
7 8
1 2
1 3
2 5
2 4
4 6
5 6
3 7
6 7*/



