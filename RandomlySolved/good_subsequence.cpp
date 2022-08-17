#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
const int N=1e5+5;
const int MOD=1e9+7;
string s;

int32_t main()
{
	IOS;
	int t;
	cin>>t;
	while(t--)
	{
	    int f[26]={0};
		int ans=1;
		cin>>s;

		for(auto &ch:s)
			f[ch-'a']++;
		for(int i=0;i<26;i++)
		{
			if(!f[i])
				continue;
			ans*=f[i];
			ans%=MOD;
		}
		cout<<ans<<endl;

	}
	return 0;
}
