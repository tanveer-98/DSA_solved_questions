#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string S;
        cin>>S;
        if(n==1)
        cout<<"0\n";
        else
        {
            int dp[n];
            dp[0]=0;
            int cntA=0,cntB=0;
            if(S[0]=='B')
                cntB=1;
            for(int i=1;i<n;i++)
            {
                if(S[i]=='B')
                {
                    cntA=0;
                    cntB++;
                    dp[i]=dp[i-1];
                }
                else
                {
                    cntA++;
                    if(cntA<=cntB)
                    {
                        cntA=0;
                        cntB--;
                        dp[i]=dp[i-1]+1;
                    }
                    else
                    {

                        cntA=0;
                        cntB=0;
                        dp[i]=dp[i-1];
                    }
                }
             }
            //cout<<dp[n-1]<<"\n";
            for(int i=0;i<n;i++)
                cout<<dp[i]<<" ";
        }

    }
    return 0;
}
