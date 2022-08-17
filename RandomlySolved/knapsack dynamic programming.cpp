#include<bits/stdc++.h>
using namespace std;
int knapsack(int weight[],int value[],int W,int n)
{
    int dp[n+1][W+1];
    for(int i=0;i<=n;i++)
    {
        for(int w=0;w<=W;w++)
        {
            if(w==0||i==0)
                dp[i][w]=0;
            else if(weight[i]>w)
                dp[i][w]=dp[i-1][w];
            else{

                dp[i][w]=max(value[i]+dp[i-1][w-weight[i]],dp[i-1][w]);
            }

        }
    }
    return dp[n][W];

}
int main()
{
 int n,w;
 cin>>n>>w;
 int weight[n+1];
 int value[n+1];
 for(int i=1;i<n+1;i++)
     cin>>weight[i];
 for(int i=1;i<n+1;i++)
     cin>>value[i];

 int ans=knapsack(weight,value,w,n);
 cout<<ans;
  return 0;
}
