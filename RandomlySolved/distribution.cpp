#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int check(ll arr[],ll togive,ll students,int size)
{
    for(int i=0;i<size;i++)
    {
        ll temp=arr[i];
       while(temp>=togive&&students>0)
       {
           temp-=togive;
           students--;
       }

    }
  // cout<<"toogive "<<togive<<" students "<<students<<"\n";
   return students;
}
ll ans=-1;
void binsrch(ll arr[],int size,ll start,ll end,ll students)
{
  //cout<<"\nstart "<<start<<" end "<<end<<"\n";
  //cout<<"students"<<students<<"\n";
    if(start<=end)
    {
        ll mid=(start+end)/2;
      //cout<<"mid"<<mid<<"\n";
        if(!check(arr,mid,students,size))
        {
             ans=max(ans,mid);
             binsrch(arr,size,mid+1,end,students);
        }
        else
        {
            binsrch(arr,size,start,mid-1,students);

        }
    }
}
int main() {
     int t;
    cin>>t;
    while(t--)
    {
        ans=-1;
        int n;
        ll k;
        cin>>n>>k;
        ll arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        sort(arr,arr+n);
        ll min_candy=0,max_candy=arr[n-1];
        binsrch(arr,n,min_candy,max_candy,k);
        cout<<ans<<"\n";
    }
    return 0;
}
//O(nlogd)
