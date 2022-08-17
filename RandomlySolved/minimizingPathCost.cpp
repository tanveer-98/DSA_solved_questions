
/*
ID: ashish1610
PROG:
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
#define ll				long long int
#define vi				vector<int>
#define vl				vector<ll>
#define	pii				pair<int,int>
#define pil				pair<int, ll>
#define pll				pair<ll, ll>
#define pli 			pair<ll, int>
#define pb(v, a)		v.push_back(a)
#define mp(a, b)		make_pair(a, b)
#define MOD				1000000007
#define rep(i, a, b)	for(i=a; i<=b; ++i)
#define rrep(i, a, b)	for(i=a; i>=b; --i)
#define si(a)			scanf("%d", &a)
#define sl(a)			scanf("%lld", &a)
#define pi(a)			printf("%d", a)
#define pl(a)			printf("%lld", a)
#define pn 				printf("\n")
ll dist[1000][1000];
void update()
{


}
ll pow_mod(ll a, ll b)
{
	ll res = 1;
	while(b)
	{
		if(b & 1)
			res = (res * a) % MOD;
		a = (a * a) % MOD;
		b >>= 1;
	}
	return res;
}
map<int, int> mp;
int main()
{
	int n, m, i, j, k,queries;

	si(n);
	cin>>queries;

	//si(m);
	int src, dest;
	ll cst;

	rep(i, 1, n)
		rep(j, 1, n)
			dist[i][j] = INT_MAX;
    for(int i=1; i<=n; ++i)
	{

		mp[i-1] = i;
	}

	rep(i, 0, n- 2)
	{
		cin>>src>>dest>>cst;
		dist[mp[src]][mp[dest]] = cst;
		dist[mp[dest]][mp[src]] = cst;
	}
	rep(i, 1, n)
		dist[i][i] = 0;
	rep(k, 1, n)
		rep(i, 1, n)
			rep(j, 1, n)
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
   /* cout<<"printing the 2d array \n";

    for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<n+1;j++)
                cout<<dist[i][j]<<" ";
            cout<<"\n";
        }*/
	while(queries--)
	{
	    int choice;
	    cin>>choice;
	    if(choice==1)
        {
            cin>>src>>dest;
            pl(dist[mp[src]][mp[dest]]);
            pn;
        }
        else
        {
            int vertex;
            cin>>vertex;
            //update(vertex);
            //cout<<"incomplete\n";
        }
	}
	return 0;
}
