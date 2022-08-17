#include <bits/stdc++.h>
#define ll long long int
#define MAX 1e9
using namespace std;
int dp[1005];
int F[1005];
int  solve(int Current,int N,int K)
{
	if(dp[Current] != MAX)
		return dp[Current];
	int present[101]={0},contradicts=0;
    int i=Current;
    while(i<N)
    {
        present[F[i]]++;
		if(present[F[i]]==2)
			    contradicts += 2;
		else if(present[F[i]] > 2)
			contradicts += 1;
		dp[Current] = min(dp[Current], K + contradicts+ solve(i+1,N,K));//donot include the conflict or include
        i++;
    }
	return dp[Current];
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{

	    int n,k;
		cin >> n >> k;
		for(int i=0; i<n; i++)
            cin>>F[i];
		for(int i=0;i<n;i++)
        {
            dp[i]=MAX;
        }
		dp[n] = 0;
		int ans=solve(0,n,k);
		cout<<ans<<"\n";
	}
	return 0;
}

