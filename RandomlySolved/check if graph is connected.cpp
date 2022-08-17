//breadth first search  using adjacency list
#include<bits/stdc++.h>
using namespace std;
int edges[1001][1001];
bool visited[1001]={0};
queue<int> q;
void bfs(int start ,int n)
{
   // cout<<q.front()<<" ";
    //visited[q.front()]=1;
    q.pop();
    for(int i=0;i<=n;i++)
    {
        if(i==start)
            continue;
        if(edges[start][i]==1&&visited[i]==0)
        {
            q.push(i);
            visited[i]=true;
        }
    }

    if(q.empty())
        return;
    else
        bfs(q.front(),n);
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

            q.push(0);
            visited[0]=true;// this  part for also considering the disconnected components
            bfs(0,n);
            for(int i=0;i<n;i++)
            {
                if(!visited[i])
                    {
                        cout<<"false";
                        return 0;
                    }
            }
            cout<<"true";

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


