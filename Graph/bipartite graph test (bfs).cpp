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
veci color;

// If a graph has odd length cycle then it bipartite graph
bool checkbipartite(int start, int n) {
	queue<int> q;
	q.push(start);
	visited[start] = true;
	while (!q.empty()) {
		start = q.front();
		q.pop();
		for (auto &child : adj[start]) {
			if (!visited[child]) {
				color[child] = color[start] ^ 1;
				q.push(child);
				visited[child] = true;
			}
			else {
				if (color[child] == color[start]) return false;
			}
		}
	}
	return true;
}
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
	vector<int> idegree(n, 0);
	for (int i = 0; i < e; i++) {
		int u , v;
		cin >> u >> v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	visited.assign(n, false);
	color.assign(n, 0);
	bool flag = checkbipartite(0, n);

	if (flag) cout << "BIPARTITE GRAPH";
	else cout << "NON - BIPARTITE GRAPH";
}