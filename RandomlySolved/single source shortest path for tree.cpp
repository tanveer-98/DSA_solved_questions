//single source shortest path for trees
/*
question related to the concept.(bishu and his girlfriend hackerearth)

There are N countries {1,2,3,4....N} and N-1 roads(i.e depicting a tree)

Bishu lives in the Country 1 so this can be considered as the root of the tree.

Now there are Q girls who lives in various countries (not equal to 1) .

All of them want to propose Bishu.But Bishu has some condition.

He will accept the proposal of the girl who lives at minimum distance from his country.

Now the distance between two countries is the number of roads between them.

If two or more girls are at the same minimum distance then he will accept the proposal of the girl who lives in a country with minimum id.

No two girls are at same country.

Input: First line consists of N,i.e number of countries Next N-1 lines follow the type u v which denotes there is a road between u and v. Next line consists of Q Next Q lines consists of x where the girls live.

Output: Print the id of the country of the girl who will be accepted.

Help Him!!!!!

contraints: 2<=N<=1000 1<=u,v<=N 1<=Q<=(N-1)
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> lst[100001];
int visited[100001];
int dist[100001];
void dfs(int node,int d)
{
    visited[node]=1;
    dist[node]=d;
    for(int child:lst[node])
    {
        if(!visited[child])
        {
            dfs(child,dist[node]+1);
        }
    }
}
int main()
{
    int n,u,v;
    cin>>n;
    for(int i=1;i<=n-1;i++)
    {
        cin>>u>>v;
        lst[u].push_back(v);
        lst[v].push_back(u);
    }
    dfs(1,0);
    int friends,location;
    cin>>friends;
    int ans=INT_MAX;
    int result;
    for(int i=1;i<=friends;i++)
    {
           cin>>location;
           if(dist[location]<ans)
           {
               ans=dist[location];
               result=location;

           }
           else if( dist[location==ans])
           {
               if(location<result)
                result=location;
           }
     }
    cout<<result;



}


