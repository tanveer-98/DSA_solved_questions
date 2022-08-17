/*

You are given an unordered array consisting of consecutive integers
 [1, 2, 3, ..., n] without any duplicates. You are allowed to swap
 any two elements. You need to find the minimum number of swaps required
 to sort the array in ascending order.

For example, given the array  we perform the following steps:




*/
#include<bits/stdc++.h>
using namespace std;
int solve(int n,int arr[])
{
    pair<int,int> values[n+1];
    for(int i=1;i<=n;i++)
    {
        values[i].first=arr[i];
        values[i].second=i;
    }
    sort(values+1,values+n+1);
    int mx=*max_element(arr,arr+n+1);
    int visited[n+1]={0};
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(visited[values[i].first]||values[i].second==i)
        continue;

        int  cycle=0;
        int j=values[i].first;
        while(!visited[j])
        {
            visited[j]=1;
            j=values[j].second;
            cycle++;
        }

        if(cycle>1)
        {
            ans+=(cycle-1);
        }
    }
    return ans;
}
int main()
{

    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++)cin>>arr[i];
    arr[0]=INT_MIN;
    int ans=solve(n,arr);
    cout<<ans;
    return 0;
}
