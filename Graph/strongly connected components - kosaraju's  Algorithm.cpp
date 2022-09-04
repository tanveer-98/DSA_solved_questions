// KOSARAJU'S ALGORITHM USES TOPOLOGICAL SORT SO FIRST LEARN TOPOLOGICAL SORT

#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
#pragma GCC target("avx,avx2,fma")
#define ll long long int
#define db double
#define fri(s,e) for(int i=s;i<e;i++)
#define frj(s,e) for(int j=s;j<e;j++)
#define pb push_back
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
veci adj_rev[100];
vecb visited; O(N)
stack<int> lastFinished; O(n)
map<int, vector<int> > components; // O(n)
void toposort(int start) {
	visited[start]  = true;
	for (int & child : adj[start]) {
		if (!visited[child]) {
			toposort(child);
		}
	}
	lastFinished.push(start); map<int, vector<int> > components;
}

void dfs(int start, int component ) {
	visited[start] = true;
	components[component].push_back(start);
	for (int &child : adj_rev[start]) {
		if (!visited[child]) {
			dfs(child, component);
		}
	}
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
	for (int i = 0; i < e; i++) {
		int u , v;
		cin >> u >> v;
		adj[u].pb(v);
		adj_rev[v].pb(u); // the transpose graph
	}

	//step1: create the stack
	visited.assign(n, false);
	toposort(n);

	//Step2: Apply DFS on the transpose graph

	visited.assign(n, false);
	// now take the top of the last fininshed as your start vertex for traversing the transpose of the graph
	int component = 1;
	while (!lastFinished.empty()) {
		int top = lastFinished.top();
		lastFinished.pop();
		if (!visited[top]) {
			dfs(top, component);
			component++;
		}
	}

	cout << "TOTAL STRONGLY CONNECTED COMPONENTS" << endl;
	cout << component << endl;

	cout << "COMPONENT GROUPS" << endl;
	for (auto &x : components) {
		cout << "Component No : " << x.first << endl;
		for (auto &y : x.second) {
			cout << y << " ";
		}
		cout << endl;
	}
	return 0;
}

// Time complexity: O(V+E)