/*
An island is a small piece of land surrounded by water .
 A group of islands is said to be connected if we
  can reach from any given island to any other island in the same group .
   Given N islands (numbered from 1 to N) and two lists of size M (u and v) denoting island u[i] is connected to island v[i] and vice versa .
Can you count the number of connected groups of islands.
*/
int edges[1001][1001]={{0}};
bool visited[1001]={0};
int count=0;
void dfs(int start,int n)
{
	for(int i=1;i<=n;i++)
    {
        if(start==i)continue;
        if(visited[i]==0&&edges[start][i]==1)
        {
			visited[i]=1;
            dfs(i,n);
        }
    }
}
int solve(int n,int m,vector<int>u,vector<int>v)
{
	int s1=u.size(),s2=v.size();
    for(int i=0;i<m;i++)
    {
 	   edges[u[i]][v[i]]=1;
       edges[v[i]][u[i]]=1;
	}
   // dfsconnected(n,m)
    for(int i=1;i<n;i++)
   {
       if(!visited[i])
        {
           count++;
           visited[i]=1;
            dfs(i,n);
        }
   }
    return count;
}
