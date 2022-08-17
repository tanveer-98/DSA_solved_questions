//O(mn) space complexity
/*
Given an amount A, we want you to compute the number of ways
in which you can gather A rupees if you have an infinite supply
of each of C = {1, 3, 5} valued rupee coins.
*/
#include<bits/stdc++.h>
using namespace std;
int dp[101][101];
int solve(int coins[],int m,int value)
{
    if(value>=1&&m<=0)
    return 0;
    if(value==0)
    return 1;
    if(value<0)
    return 0;
    if(dp[m][value]>-1)
    return dp[m][value];
    int first=solve(coins,m-1,value);
    int second=solve(coins,m,value-coins[m-1]);
    dp[m][value]=first+second;
    return first+second;
}
int main()
{
    int t;
    cin>>t;
    int coins[]={1,3,5};
    while(t--)
    {
        memset(dp,-1,sizeof(dp));
        int value;
        cin>>value;
        cout<<solve(coins,3,value)<<"\n";
    }

    return 0;
}

