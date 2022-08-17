//count minimum steps to make a number by its squares
#include<bits/stdc++.h>
using namespace std;
int dp[10001];
int cnt=0;
int minCount(int n){
    if(cnt==0)
    {
		memset(dp,-1,sizeof (dp));
        cnt++;
    }
    int res;
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    dp[3]=3;
    if(dp[n]>-1)
        return dp[n];
    for(int i=4;i<=n;i++)
    {
        res=i;
		int temp=i*i;
        if(temp>n)break;
        else
        {
            res=min(res,1+minCount(n-temp));
        }
    }
    dp[n]=res;
    return res;
}
