
#include <bits/stdc++.h>
#define ll long long int
#define mod 100000000
using namespace std;
ll factorial[1001];
ll inv[1001];

void precompute()
{
        inv[1] = 1;
        for(int i = 2; i < m; ++i)
        inv[i] = (m - (m/i) * inv[m%i] % m) % m;

        factorial[0]=1;
        for (int i = 1; i <= 1000; i++)
        {
            factorial[i] = factorial[i - 1] * i % mod;
         }
}

long long binomial_coefficient(int n, int k) {
    return factorial[n] * inv[factorial[k]] % mod * inv[factorial[n - k]] % mod;
}

ll catalan( int n)
{
    ll c = binomial_coefficient(2*n, n)%mod;
    return c/(n+1);
}
int countBST( int n)
{
   long long int ans=catalan(n)%mod;
    return ans;
}
#include <cmath>
int main()
{
    precompute()
	int n ;
	cin>>n;
	cout<<countBST(n);
	return 0;
}


