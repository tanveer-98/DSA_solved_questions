#include<bits/stdc++.h>
#define ll long long int
#define fri(s,e) for(int i=s;i<e;i++)
#define frj(s,e) for(int j=s;j<e;j++)
#define pb push_back
#define pf push_front
#define f first
#define sec second
#define db double
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    fast
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll sum=0;
        if(n==0)
        {
            cout<<-1<<endl;
        }
        else
        {
        fri(1,n+1)
        {
            sum+=(((i*i*i)%mod+(2*i))%mod/3);
        }
        cout<<sum<<endl;
        }
    }


    return 0;
}
