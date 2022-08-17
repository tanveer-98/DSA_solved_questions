/*
Gary is a teacher at XYZ school. To reward his N students he bought a packet of N candies all with different flavours.
 But the problem is some students like certain flavour while some doesn't. Now Gary wants to know the number of ways
he can distribute these N candies to his N students such that every student gets exactly one candy he likes.
*/
#include<bits/stdc++.h>
using namespace std;
#define MAXN 16
long long int findsol(int like[][MAXN],int N,int mask,int person,long long int *dp)
{
    if(person>=N)return 1;
    if(dp[mask]!=0)
        return dp[mask];
    long long int ans=0;
    for(int i=0;i<N;i++)
    {
        if(like[person][i]==1&&!(mask&(1<<i)))
        {
            ans+=findsol(like,N,mask|(1<<i),person+1,dp);
        }
    }
    dp[mask]=ans;
    return ans;
}
long long solve(int like[][MAXN],int N)
{
    long long int* dp=new long long int[1<<N];
    for(int i=0;i<N;i++)
    {
        dp[i]=0;
    }

	long long int ans=findsol(like,N,0,0,dp);
	return ans;
}
int main()
{
	int n,like[MAXN][MAXN];
	cin>>n;
	for(int i = 0; i < n ; i++){
		for(int j = 0; j < n; j++){
			cin>>like[i][j];
		}
	}
	cout<<solve(like,n)<<endl;
}
