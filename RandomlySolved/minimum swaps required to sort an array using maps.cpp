
/*

You are given an unordered array consisting of consecutive integers
 [1, 2, 3, ..., n] without any duplicates. You are allowed to swap
 any two elements. You need to find the minimum number of swaps required
 to sort the array in ascending order.

For example, given the array  we perform the following steps:




*/
#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
bool cmp(pair<int , int>& a,
         pair<int, int>& b)
{
    return a.second < b.second;
}
int check(map<ll,int>mp,int sortedlist[],int n)
{


}
ll solve(int n,ll  arr[])
{

}
int main()
{

    int n;
    cin>>n;
    ll arr[n+1];
    for(int i=1;i<=n;i++)cin>>arr[i];
    arr[0]=INT_MIN;
    int ans=solve(n,arr);
    cout<<ans;
    return 0;
}

