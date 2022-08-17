
#include<bits/stdc++.h>
using namespace std;
int findMaxSquareWithAllZeros(int** arr, int row, int col){


 int dp[row+1][col+1];
    memset(dp,0,sizeof(dp));
    int ans=0;
 for(int i=1;i<=row;i++)
     for(int j=1;j<=col;j++)
     {
			if(arr[i-1][j-1]==1)
                continue;
            else
            {
                int l,u,d;
                l=dp[i][j-1];
                u=dp[i-1][j];
                d=dp[i-1][j-1];
              	int minimum=(l<u)?(l<d?l:d):(u<d?u:d);
              	dp[i][j]=1+minimum;
                ans=max(ans,dp[i][j]);
            }
     }

    return ans ;
}
int main()
 {
  int **arr,n,m,i,j;
  cin>>n>>m;
  arr=new int*[n];
  for(i=0;i<n;i++)
      {
       arr[i]=new int[m];
      }
  for(i=0;i<n;i++)
     {
      for(j=0;j<m;j++)
	    {
	     cin>>arr[i][j];
	    }
     }
  cout << findMaxSquareWithAllZeros(arr,n,m) << endl;
  delete arr;
  return 0;
}
