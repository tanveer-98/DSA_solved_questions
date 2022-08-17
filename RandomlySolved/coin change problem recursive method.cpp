#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int coinscount(int coins[],int m,int value)
{

    if(value==0)
        return 1;
    if(value>=1&&m<=0)
        return 0;
    if(value<0)
        return 0;
        //if(dp[m][value]>-1)
           // return dp[m][value];
             int first=coinscount(coins,m-1,value);
             int second=coinscount(coins,m,value-coins[m-1]);
             //dp[m][value]=first+second;
    return first+second;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    int value,m;
    int coins[m];
    cin>>value>>m;
    for(int i=0;i<m;i++)
        cin>>coins[i];
    int ans=coinscount(coins,m,value);
    cout<<ans;
    return 0;
}
