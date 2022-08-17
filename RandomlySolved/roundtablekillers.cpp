#include<bits/stdc++.h>
#define LL long long int
#define M 1000000007
#define reset(a) memset(a,0,sizeof(a))
#define rep(i,j,k) for(i=j;i<=k;++i)
#define per(i,j,k) for(i=j;i>=k;--i)
#define print(a,start,end) for(i=start;i<=end;++i) cout<<a[i];
#define endl "\n"
#define inf 100000000000000
LL pow(LL a,LL b,LL m){LL x=1,y=a;while(b > 0){if(b%2 == 1){x=(x*y);if(x>m) x%=m;}y = (y*y);if(y>m) y%=m;b /= 2;}return x%m;}
LL gcd(LL a,LL b){if(b==0) return a; else return gcd(b,a%b);}
LL gen(LL start,LL end){LL diff = end-start;LL temp = rand()%start;return temp+diff;}
using namespace std;
set<int> s;
int main()
	{
		//ios_base::sync_with_stdio(0);
		int n , k , temp , x;
		cin >> n >> k >> x;
		for(int i = 1 ; i <= n ; i++)
			s.insert(i);
		int offset = 2;
		set<int>:: iterator it;
		while(1)
			{
				offset = 2;
				temp = x;
				s.erase(temp);
				if(offset + 1 > s.size())
					{
						cout << x ;
						return 0;
					}
				while(offset)
					{
						it = s.upper_bound(x);
						if(it == s.end())
							{
								x = *(s.begin());
								s.erase(s.begin());
								--offset;
							}
						else
							{
								x = *it;
								s.erase(it);
								--offset;
							}
					}
				it = s.upper_bound(x);
				if(it == s.end())
					{
						x = *s.begin();
					}
				else
						x = *it;
				s.insert(temp);
			}
	}
