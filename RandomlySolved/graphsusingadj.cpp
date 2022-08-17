#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long int
using namespace std;

// A utility function to add an edge in an
// undirected graph.
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

// A utility function to print the adjacency list
// representation of graph
void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v)
    {
        cout << "\n Adjacency list of vertex "
             << v << "\n head ";
        for (auto x : adj[v])
           cout << "-> " << x;
        printf("\n");
    }
}


// Driver code
int main()
{
    ll n;
    cin>>n;
    ll q;
    cin>>q;
    vector<int> adj[n];
    for(int i=0;i<n-1;i++)
    {
       ll x,y,cost;
       cin>>x>>y>>cost;
       addEdge(adj, x, y);
    }

    printGraph(adj, n);
    return 0;
}
