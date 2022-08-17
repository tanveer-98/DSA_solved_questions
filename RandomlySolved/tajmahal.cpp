#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin>>n;

    ll arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    ll time[n];
    for(int i=0;i<n;i++)
    {
        int t;
        if(arr[i]<=i)
            t=0;
        else
           {
                t=(arr[i]-i)/n;
                if((arr[i]-i)%n!=0)
                t++;
           }

            cout<<"t="<<t<<" ";
        time[i]=i+t*n;

    }
    int mini=INT_MAX;
    int min_index;
    cout<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<time[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<n;i++ )
    {
        if(mini>time[i])
        {
            mini=time[i];
            min_index=i+1;
        }
    }
    cout<<min_index;
	return 0;
}
