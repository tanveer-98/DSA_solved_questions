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
ll countSetBits(ll n)
{
    // base case
    if (n == 0)
        return 0;
    else
        return 1 + countSetBits(n & (n - 1));
}
int main()
{

    fast
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q,even=0,odd=0,i,x,temp;
        cin>>n>>q;
        frj(0,n)
        {

            cin>>x;
            if(countSetBits(x)&1)
            odd++;
            else even++;

        }
        while(q--)
        {


            cin>>x;
            if(countSetBits(x)&1)
            cout<<odd<<" "<<even<<"\n";
            else
            cout<<even<<" "<<odd<<"\n";
        }



    }

    return 0;
}
