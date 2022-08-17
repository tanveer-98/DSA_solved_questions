#include <bits/stdc++.h>
#define lli long long int
#define li long int
#define MOD 1000000007
#define nl "\n"
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define FFOR(i,a,b,c) for(i=a;i<=b;i+=c)
#define RFOR(i,a,b,c) for(i=b;i>=a;i-=c)
#define MFOR(i,a,b,c) for(i=a;i<=b;i*=c)
#define DFOR(i,a,b,c) for(i=b;i>=a;i/=c)
#define ip(x) cin>>x
#define op(x) cout<<x<<"\n"
using namespace std;
typedef pair<li,li> iPair;
typedef vector<li> vi;
typedef stack<li> st;
typedef queue<li> qu;
typedef priority_queue<li> p_qu;

/*bool prime[100000001];
void SieveOfEratosthenes(li n)
{
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = 0;
    for (li p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
            for (li i=p*p; i<=n; i += p)
                prime[i] = false;
    }
}*/
void take_input(li A[], li N)
{
	li i;
	FFOR(i,0,N-1,1)
		ip(A[i]);
}

int main()
{
	li n,i=0,d1,j,q;
	unordered_map<li,vector<iPair>> freq;
	vector<iPair> v1;
	ip(n);
	ip(q);
	li arr[n];
	take_input(arr,n);
	while(i < n-1)
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
		li maxi=1,l,r,d;
		ip(l);
		ip(r);
		ip(d);
		li x = freq[d].size();
		FFOR(i,0,x-1,1)
		{
			iPair Pi = freq[d][i];
			li count = 0;
			if(l>=Pi.fi && r<=Pi.se)
				count += r-l+1;
			else if(l>=Pi.fi && l<=Pi.se)
				count += Pi.se-l+1;
			else if(r>=Pi.fi && r<=Pi.se)
				count += r-Pi.fi+1;
			else if(l<Pi.fi && r>Pi.se)
				count += Pi.se-Pi.fi+1;
			maxi = max(count,maxi);
		}
		op(maxi);
	}
}
