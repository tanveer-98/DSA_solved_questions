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
    int t;cin>>t;
    while(t--)
    {
        ll totalpage,div,sum=0,last;
        cin>>totalpage>>div;
        if(div>totalpage)
            cout<<0<<endl;
        else
        {


        for(ll i=0;i<=totalpage;i=i+div)
        {
            if(i%div==0)
            {
                last=i%10;
                sum=sum+last;
            }


        }
        cout<<sum<<endl;
        }
    }


    return 0;
}
