#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {


        int n;
        cin>>n;
        ll  w[n];
        ll freq[51]={0};
        for(int i=0;i<n;i++)
        {
            cin>>w[i];
            freq[w[i]]++;
           // cout<<freq[i]<<"\n";
        }
        ll mx=INT_MIN;
        ll sum[101]={0};
        for(int i=1;i<=50;i++)
        {
            mx=max(mx,freq[i]/2);
            sum[2*i]+=(freq[i]/2);



        }
        /*cout<<"sum"<<"\n";
           for(int i=1;i<=50;i++)
        {
             cout<<freq[i]<<"\n";
        }
        cout<<"freq"<<"\n";
          for(int i=1;i<=50;i++)
        {
             cout<<sum[2*i]<<"\n";
        }*/

        ll mx2;
       // cout<<"\n"<<sum[12]<<" sum12\n";
        for(int i=1;i<=49;i++)
        {
            for(int j=i+1;j<=50;j++)
            {
                if(freq[i]==0||freq[j]==0)
                continue;
                //cout<<"i+j"<<i+j<<"\n";
                sum[i+j]+=min(freq[i],freq[j]);

            }

        }
        //cout<<"\n"<<sum[12]<<" sum12\n";
        ll ans;
        sort(sum,sum+101);
        mx2=sum[100];
        if(mx2>mx)
        ans=mx2;
        else ans=mx;
        cout<<ans<<"\n";

    }
}
