/*
A thief wants to loot houses. He knows the amount of money in each house.
He cannot loot two consecutive houses.
Find the maximum amount of money he can loot.
*/
#include<bits/stdc++.h>
using namespace std;
int getMaxMoney(int arr[],int n)
{
    int dp[n];
    dp[0]=arr[0];
    dp[1]=max(arr[0],arr[1]);
    cout<<dp[0]<<" "<<dp[1]<<" ";
    for(int i=2;i<n;i++)
    {
        dp[i]=max(dp[i-1],dp[i-2]+arr[i]);
        cout<<dp[i]<<" ";
    }
    return dp[n-1];
}
int main(){
    int n;
    cin >> n;
    int arr[10000];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << getMaxMoney(arr, n);
}
