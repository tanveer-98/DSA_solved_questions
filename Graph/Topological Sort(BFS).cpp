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

void bfs(int start) {

}
void toposortBFS(int n, vector<int> &idegree) {
	//find the nodes with zero
	queue<int> q;
	for (int i = 0; i < n; i++) {
		if (idegree[i] == 0)q.push(i);
	}

	while (!q.empty()) {
		// pop from queue and reduce indegree of child nodes
		// if indegree of child nodes == 0 after decrement
		// push child node into the queue

		int front = q.front();
		ans.pb(front);
		q.pop();

		for (auto &child : adj[front]) {
			idegree[child]--;
			if (idegree[child] == 0) {
				q.push(child);
			}

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
	vector<int> idegree(n, 0);
	for (int i = 0; i < e; i++) {
		int u , v;
		cin >> u >> v;
		adj[u].pb(v);
		idegree[v]++;
	}

	toposortBFS(n, idegree);


	cout << "PRINTING TOPOSORT ORDER" << endl;

	for (auto &x : ans) {
		cout << x << " ";
	}
	return 0;
}