// TOPOLOGICAL SORT- BFS is also called Kahn's algorithm- uses

#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
#pragma GCC target("avx,avx2,fma")
#define ll long long int
#define db double
#define fri(s,e) for(int i=s;i<e;i++)
#define frj(s,e) for(int j=s;j<e;j++)
#define pb push_back
#define p push
#define mp make_pair
#define pf push_front
#define veci vector<int>
#define vecb vector<bool>
#define f first
#define sec second
const int mod = 1e7;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nl “\n”
using namespace std;
veci adj[100];
vecb visited;
veci ans;

// If a graph has odd length cycle then it bipartite graph
class Solution {
public:
	bool dfs(int start, vector<vector<int> > & adj, vector<bool> & visited, vector<int> & col, int color) {

		visited[start] = true;
		col[start] = color;
		for (int i = 0; i < adj[start].size(); i++)
		{
			if (!visited[adj[start][i]]) {
				if ( dfs(adj[start][i], adj, visited , col, color ^ 1) == false)
					return false;
			}
			else {
				if (col[start] == col[adj[start][i]]) {
					return false;
				}
			}
		}
		return true;
	}
	bool isBipartite(vector<vector<int>>& graph) {
		int n = graph.size();
		vector<bool> visited(n, false);
		vector<int>  col(n);
		int cnt = 0;
		bool status  = true;
		for (int i = 0 ; i < n; i++) {
			if (!visited[i]) {
				status =  dfs(i, graph, visited, col, 0)& status;
			}
		}
		return status;

	}
};
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n ;
	cin >> n ;
	int e;
	cin >> e;
	vector<vector<int> > adj(n);

	for (int i = 0; i < e; i++) {
		int u , v;
		cin >> u >> v;
		adj[u].pb(v);
		adj[v].pb(u);
	}

	// Solution s;
	Solution *s = new Solution	();

	bool flag = s->isBipartite(adj);
	if (flag) cout << "BIPARTITE GRAPH";
	else cout << "NON - BIPARTITE GRAPH";
	return 0;
}