#include<bits/stdc++.h>
#define ll long long int
#define fri(s,e) for(int i=s;i<e;i++)
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
#define nl “\n”
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        int a1=n*(a-b);
        int a2=n*(a+b);
        int b2=c+d;
        int b1=c-d;
        if(b2<a1||b1>a2)
            cout<<"No\n";
        else cout<<"Yes\n";

    }


    return 0;
}
