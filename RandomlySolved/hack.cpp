// in the name of god
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define GOD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{GOD;int t, n, f, c, ct;cin>>t;while (t--) {cin>>n;vector<int> a(n*2+1, 0);c=0;for (int i=0;i<n;i++) {cin>>f;a[f]++;}for (int i=2;i<=n*2;i++) {ct=0;for (int j=1;j<=i/2;j++)ct+=(j*2==i?a[j]/2:min(a[j], a[i-j]));c=max(ct, c);}cout<<c<<endl;}return 0;}
