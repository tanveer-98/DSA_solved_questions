
/*
Harshit gave Aahad an array of size N and
asked to minimize the difference between the maximum value
and minimum value by modifying the array under the condition that
each array element either increase or decrease by k(only once).
*/



#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll solve(ll arr[],int n,int k)
{
    sort(arr,arr+n);
    ll ans=arr[n-1]-arr[0];
    ll small=arr[0]+k;
    ll big=arr[n-1]-k;
    if(small>big)
        swap(small,big);
    for(int i=1;i<n-1;i++)
    {
       ll add=arr[i]+k;
       ll sub=arr[i]-k;
       if(add<=big||sub>=small)
        continue;
       if(big-sub<=add-small)
        small=sub;
       else
        big=add;
    }
    ans=min(ans,big-small);
    return ans;

}

int main()
{
    int n,k;
    cin>>n>>k;
    ll arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    ll ans=solve(arr,n,k);
    cout<<ans;
    return 0;
}
