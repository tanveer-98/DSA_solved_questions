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
/*ll power(ll x,ll y)
{
    ll res=1;
    while(y>0)
    {
        if(y%2==1)
            res=(res*x)%mod;
        x=(x*x)%mod;
        y=y/2;
    }
    return res;
}*/
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
       int arr[n];
       fri(0,n)cin>>arr[i];
       int count=1,flag=0;
       //for first five elements
       for(int i=4;i>0;i--)
        {
            for(int j=0;j<=i-1;j++)
            {
                if(arr[i]>=arr[j])
                {

                    flag=1;
                    break;
                }

            }

            if(flag==0)
            {
               //cout<<"the ith term is"<<i<<endl;
                count++;
            }

            flag=0;
        }
        //for next five elements
        //cout<<"count 1:"<<count<<endl;
        flag=0;
        for(int i=n-1;i>=5;i--)
        {
            for(int j=i-5;j<i;j++)
            {
                if(arr[i]>=arr[j])
                {

                    flag=1;
                    break;
                }

            }
            if(flag==0)
            {
                //cout<<"the ith term is"<<i<<endl;
                 count++;
            }

            flag=0;
        }
        cout<<count<<endl;
       //cout<<"count 2:"<<count<<endl;

    }


    return 0;
}
