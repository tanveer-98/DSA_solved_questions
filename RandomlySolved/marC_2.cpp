#include<bits/stdc++.h>
#define ll long long int
#define fri(s,e) for(ll i=s;i<e;i++)
#define frj(s,e) for(int j=s;j<e;j++)
#define pb push_back
#define mp make_pair
#define pf push_front
#define veci vector<int>
#define vecb vector<bool>
#define f first
#define sec second
#define db double
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
class gfg {
    /* Function to get no of set bits in binary
representation of passed binary no. */
public:
    unsigned int countSetBits(ll n)
    {
        unsigned ll count = 0;
        while (n) {
            n &= (n - 1);
            count++;
        }
        return count;
    }
};
void solve(ll B[],ll n)
{
    gfg g;
    int even=0,odd=0,cnt=0;
    fri(0,n)
    {
        cnt=g.countSetBits(B[i]);
        if(cnt&1) odd++;
        else even++;
    }

    cout<<even<<" "<<odd<<endl;
}
int main()
{
    fast
    int t;cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        ll A[n];
        fri(0,n)cin>>A[i];
        while(q--)
        {

            ll p;cin>>p;
            ll B[n];
            fri(0,n)B[i]=p^A[i];
            solve(B,n);
        }

    }


    return 0;
}
