#include <bits/stdc++.h>
#define lli long long int
#define li long int
#define MOD 1000000007
#define nl "\n"
#define fi first
#define se second
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
	int n,i=0,d1,j,q;
	unordered_map<li,vector<pair<li,li> >> freq;
	vector<pair<li,li> > v1;
	cin>>n;
	cin>>q;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];

	while(i<n-1)
	{
		d1 = arr[i+1]-arr[i];
		j=i+1;
		while(j<(n-1))
		{
			if((arr[j+1]-arr[j]) == d1)
				j++;
			else
			{
				freq[d1].pb(mp(i+1,j+1));
				break;
			}
		}
		if(j == n-1)
			freq[d1].pb(mp(i+1,j+1));
		i = j;
	}
	while(q--)
	{
		int maxi=1,l,r,d;
        cin>>l>>r>>d;

		int x = freq[d].size();
		for(int i=0;i<=x-1;i++)
		{
			pair<li,li>  Pi = freq[d][i];
			int cnt = 0;
			if(l>=Pi.first && r<=Pi.second)
				cnt += r-l+1;
			else if(l>=Pi.fi && l<=Pi.se)
				cnt += Pi.se-l+1;
			else if(r>=Pi.fi && r<=Pi.se)
				cnt += r-Pi.fi+1;
			else if(l<Pi.fi && r>Pi.se)
				cnt += Pi.se-Pi.fi+1;
			maxi = max(cnt,maxi);
		}
		cout<<maxi<<endl;
	}
}
