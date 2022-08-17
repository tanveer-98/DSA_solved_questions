
/*


*/

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll sum[n]={0};
    sum[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        sum[i]=sum[i-1]+arr[i];
        //cout<<sum[i]<<" ";

    }
    //cout<<" \n";
    ll maxsum=sum[n-1];
    //cout<<maxsum<<" \n";
    for(int i=0;i<n;i++)
    {
        if(sum[n-1]-2*sum[i]>maxsum)
        {
            maxsum=sum[n-1]-2*sum[i];
           // cout<<maxsum<<" ";
        }

    }
    cout<<maxsum;

    return 0;
}
