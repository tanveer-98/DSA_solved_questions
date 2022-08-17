#include<bits/stdc++.h>
#define ll long long int
#define fri(s,e) for(int i=s;i<e;i++)
#define frj(s,e) for(int j=s;j<e;j++)
#define pb push_ back
#define pf push_front
#define f first
#define sec second
#define db double
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    double res;
    int t;cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
         if (n==1)
        {
            if(m<2)
            cout<<m<<endl;
            else
            cout<<-1<<endl;
        }
        else if (n==2)
        {
            if (m==0||m>3)
            cout<<-1<<endl;
            else if(m== 1)
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
        else if (m<n-1|| m > ((n)*(n+1)/2))
        {
           cout<<-1<<endl;
        }
        else
        {
            if(m<=n+1)
             cout<<2<<endl;
             else if(m<=2*n-1)
             cout<<3<<endl;
            else
            {
               res=2ll*(m-n);
                res=ceil(res/n)+1;
                cout<<(ll)res<<endl;
            }
        }
    }


    return 0;
}
