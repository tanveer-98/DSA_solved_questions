#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &A) {
    int count=0;
    sort(A.begin(),A.end());
    int n=A.size();
    int mx=*max_element(A.begin(),A.end());
    map<int,int> mp;

    for(int i=0;i<n;i++)
    {
        mp[A[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        curr[A[i]]++;
        if(A[i]==n-i-1-(freq[A[i]]-curr[A[i]]))
        return 1;
    }
    if(count==0)
    return -1;
}
int main()
{
    int n;
    cin>>n;
    vector<int>A;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        A.push_back(x);
    }
    int ans=solve(A);
    cout<<ans;
    return 0;
}
