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
using namespace std;
#define nl “\n”

using namespace std;

void dijkstra(int n , int source, vector<vector<pair<int, int> > > &adj, vector<int> &d, vector<bool> & marked, vector<int> & path) {

	cout << "dijkstra started" << endl;
	d[source] = 0;
	// sleep(1000);
	for (int i = 0; i < n; i++) {
		int start = -1 ;
		for (int j = 0; j < n; j++) {
			if (!marked[j] && (start == -1 || d[j] < d[start])) {
				start = j ;
			}
		}

		if (d[start] == INT_MAX) //The case of disconnected component
			break;

		marked[start] = true;

		for (int i = 0; i < adj[start].size(); i++) {
			int to = adj[start][i].first;
			int len = adj[start][i].second ;
			if (d[to] > d[start] + len) {
				d[to] = d[start] + len ;
				path[to] = start;
			}
		}
	}
	// sleep(1000);
	cout << "dijkstra completed" << endl;
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
	cin >> n;

	vector<vector<pair<int, int> > >adj(n + 1);
	int e ;
	cin >> e;
	for (int i = 0; i < e; i++) {
		int u, v, w;
		cin >> u >> v >> w;
		adj[u].pb(mp(v, w));
		adj[v].pb(mp(u, w));
	}

	vector<int> d;
	d.assign(n + 1, INT_MAX);
	vector<bool> marked(n + 1, false);
	vector<int> path(n + 1, -1);
	dijkstra(n, 1, adj, d, marked, path);

	cout << "PRINTING SHORTEST DISTANCES" << endl;

	int i = 0;
	for (auto &x : d) {
		cout << i << " " << x << endl;
		i++;
	}
	i = 0;
	cout << "PRINTING THE PATHS" << "\n";

	for (auto &x : path) {
		cout << i << " " << x << endl;
		i++;
	}


	return 0;
}