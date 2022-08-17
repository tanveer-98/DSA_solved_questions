#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int check(ll arr[],int distance,int cows,int size)
{
    int start=0;
    cows--;
    for(int i=1;i<size&&cows>0;i++)
    {
        if(arr[i]-arr[start]>=distance)
        {

            cows--;
            start=i;
        }

    }
  // cout<<"distance"<<distance<<"cows"<<cows<<"\n";
   return cows;
}
int ans=-1;
void binsrch(ll arr[],int size,int start,int end,int cows)
{
  // cout<<"\nstart "<<start<<" end "<<end<<"\n";


    if(start<=end)
    {
        int mid=(start+end)/2;
      // cout<<"mid"<<mid<<"\n";
        if(!check(arr,mid,cows,size))
        {
             ans=max(ans,mid);
             binsrch(arr,size,mid+1,end,cows);
        }
        else
        {
            binsrch(arr,size,start,mid-1,cows);

        }
    }
}
int main() {
     int t;
    cin>>t;
    while(t--)
    {
        ans=-1;
        int n,c;
        cin>>n>>c;
        ll arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        sort(arr,arr+n);
        int dmin=0,dmax=arr[n-1]-arr[0];
        binsrch(arr,n,dmin,dmax,c);
        cout<<ans<<"\n";
    }
    return 0;
}
//O(nlogd)
