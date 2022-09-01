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
vecb visited;
veci ans;
void dfs(int start) {
	visited[start]  = true;
	for (auto& child : adj[start]) {
		if (!visited[child]) {
			dfs(child);
		}
	}
	ans.push_back(start);

}
void toposort(int n) {
	visited.assign(n, false);
	for (int i = 0; i < n; i++) {
		if (!visited[i]) {
			dfs(i);
		}
	}
	reverse(ans.begin(), ans.end());
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
	}

	toposort(n);


	cout << "PRINTING TOPOSORT ORDER" << endl;

	for (auto &x : ans) {
		cout << x << " ";
	}
	return 0;
}