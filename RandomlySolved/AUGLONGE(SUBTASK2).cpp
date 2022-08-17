#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int N, K;
int dp[1005];
int f[1005];

int ans(int C)
{
	if(dp[C] != INF)
		return dp[C];

	vector<int> fre(101,0);
	int cn = 0;

	for(int i=C; i<N; i++)
	{
		fre[f[i]]++;
		if(fre[f[i]] == 2)
			cn += 2;
		else if(fre[f[i]] > 2)
			cn += 1;
		dp[C] = min(dp[C], K + cn + ans(i+1));
	}

	return dp[C];
}

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		cin >> N >> K;
		for(int i=0; i<N; i++)
		{
			cin >> f[i];
			dp[i] = INF;
		}
		dp[N] = 0;


		cout << ans(0) << '\n';
		for(int i=0;i<N;i++)cout<<dp[i]<<" ";
		cout<<"\n";
	}

	return 0;
}
