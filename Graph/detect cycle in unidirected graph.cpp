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
vector<int> adj [1000];

bool dfs(int start, int n , int parent, vector<bool> &visited) {
	cout << "start" << start << "parent" << parent << endl;
	visited[start] = true;
	for (int i = 0; i < adj[start].size(); i++) {
		if (!visited[adj[start][i]]) {
			dfs( adj[start][i], n, start, visited); // donont write return dfs() here as it will not check the other childrens
		}
		else {
			if (adj[start][i] != parent) {
				return true;
			}
		}
	}
	return false;
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


	int e ;
	cin >> e;
	for (int i = 0; i < e; i++) {
		int u, v;
		cin >> u >> v ;
		adj[u].pb(v);
		adj[v].pb(u);
	}

	vector<bool>visited(n, false);

	int components  = 0;
	int flag = 0;
	for (int i = 0; i < n; i++) {
		if (!visited[i]) {
			// cout << "I" << i << endl;
			components++;
			if (dfs(i, n, -1, visited))flag = 1 ;
		}
	}

	cout << "COMPONENTS IN GRAPH " << components << "\n" ;
	if (flag)
		cout << "CYCLE DETECTED";
	else cout << "NO CYCLE DETECTED";

	return 0;
}