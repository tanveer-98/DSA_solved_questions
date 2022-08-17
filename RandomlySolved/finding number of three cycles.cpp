/*
Given a graph with N vertices (numbered from 1 to N) and Two Lists
(U,V) of size M where (U[i],V[i]) and (V[i],U[i]) are connected by an edge ,
then count the distinct 3-cycles in the graph. A 3-cycle PQR is a cycle in
 which (P,Q), (Q,R) and (R,P)

are connected an edge.
*/
#include<iostream>
#include<vector>
using namespace std;
#define MAXN 101
int edges[MAXN][MAXN]={{0}};
int visited[MAXN]={0};
int total=0;
void dfs(int n,int start,int curV,int cyclesize)
{
    cout<<"start "<<start<<"curV "<<curV<<"cyclesize "<<cyclesize<<"\n";

    if(cyclesize==0)
    {
        if(edges[curV][start])
        {
            total++;
            return;
        }
        else return;

    }
    visited[curV]=1;
    for(int i=1;i<=n;i++){
        cout<<visited[i]<<" ";
    }
    cout<<"\n";
    for(int i=1;i<=n;i++)
    {
        if(edges[curV][i]==1&&visited[i]!=0)
        {
            dfs(n,start,i,cyclesize-1);
            visited[i]=false;
        }
    }


}

int solve(int n,int m,vector<int>u,vector<int>v)
{
	for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            edges[u[i]][v[i]]=1;
            edges[v[i]][u[i]]=1;
		}

    for(int i=1;i<n;i++)
   {
       if(!visited[i])
        {
            dfs(n,i,i,3);
            cout<<"\n";
        }
   }
   return total;
}


int main()
{
	int n,m;
	vector<int>u,v;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int x;
		cin>>x;
		u.push_back(x);
	}
	for(int i=0;i<m;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	cout<<solve(n,m,u,v)<<endl;
}
