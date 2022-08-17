#include<bits/stdc++.h>
using namespace std;
bool check(int a,int b,int c)
{
   return (a + b <= c || a + c <= b || b + c <= a)?0:1;
}
int solve(int arr[],int n)
{
    int i=0;
    while(i<=n-3)
    {
        if(arr[i]<=arr[i+1]+arr[i+2])
        {
            if(check(arr[i],arr[i+1],arr[i+2]))
         //  cout<<"i "<<i<<"\n";
             return i;
             else
                i++;
        }

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
        //cout<<endl;
     sort(arr, arr+n, greater<int>());
     //for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    // cout<<endl;
    int ans=solve(arr,n);
   // cout<<"ans "<<ans<<"\n";
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
