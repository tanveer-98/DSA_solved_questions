
//breadth first search  using adjacency list
#include<bits/stdc++.h>
using namespace std;
int edges[50][50];
bool visited[50]={0};
queue<int> q;
map<int,int> mp;
int flag=0;
void bfs(int start ,int n,int ed)
{
    if(start==ed)
    {

        flag=1;
        return ;
    }
    //cout<<q.front()<<" ";
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
            mp[i]=start;;

        }
    }

    if(q.empty())
        return;
    else
        bfs(q.front(),n,ed);
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
    int start,ed;
    cin>>start>>ed;
            q.push(start);
            visited[start]=true;
            bfs(start,n,ed);
            if(flag==1)
            {
                int cur=ed;
                while(cur!=start)
                {
                    cout<<cur<<" ";
                    cur=mp[cur];
                }
                cout<<start;
            }
            else
                return 0;

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


