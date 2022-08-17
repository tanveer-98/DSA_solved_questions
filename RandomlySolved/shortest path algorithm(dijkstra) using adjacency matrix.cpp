//DIJKSTRA SHORTEST PATH ALGORITHM USING ADJACENCY MATRIX
#include<bits/stdc++.h>
using namespace std;
void dijkstra(int s,vector<int>&d,vector<int>&p)
{
    int n=adj.size();
    d.assign(n,INF);
    p.assign(n,-1);
    vector<bool> u(n,false);
    d[s]=0;
    for(int i=0;i<n;i++)
    {
        int
    }



}
int main()
{
  int n;
  cin>>n;
  int edges;
  cin>>edges;
  vector<int>d;
  vector<int>p;
  vector<vector<pair<int,int>> > adj(n);
  for(int i=1;i<=edges;i++)
  {
      int u,v,w;
      cin>>u>>v>>w;
      adj[u].push_back(make_pair(v,w));
      adj[v].push_back(make_pair(u,w));
  }
   dijkstra(1,d,p);



}
