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
vector<bool> seive;

int main()
{


    int t;cin>>t;
    while(t--)
    {
        seive.assign(1000005,false);
        int n;
        cin>>n;

        int arr[n];
        fri(0,n)cin>>arr[i];
        int mx=*max_element(arr,arr+n);
        int starmax=0;

        for(int i=n-1;i>0;i--)
        {
            int item=arr[i];
           int cnt=0;
           if(!seive[item])
           {
               for(int j=i-1;j>=0;j--)
               {
                   if(arr[j]%arr[i]==0)
                   cnt++;
               }
               if(cnt>starmax)
                starmax=cnt;
                int y=item;
               while(y<=mx)
               {
                   seive[y]=true;
                   y+=item;
               }
           }
        }
        cout<<starmax<<endl;

    }
}


