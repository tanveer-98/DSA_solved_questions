#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int n)
{
    int i=0;
    while(i<=n-3)
    {
        if(arr[i]>=arr[i+1]+arr[i+2])
        return i;
        else
        i++;
    }
    return -1;
}
int main()
{

    int n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr+n,arr);
    int ans=solve(arr,n);
    if(ans==-1)
        cout<<-1;
    else
    {
        int t=3;
        for(int i=ans;t--;i++)
        {

            cout<<arr[i]<<" ";
        }
    }
    return 0;
}
