#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int checknum(int numchk,vector<int> st)
{
    for(int i=0;i<st.size();i++)
    {
        if(numchk==st[i])
            return 0;
    }
    return 1;

}
int check[22]={0};
ll findsol(int N,vector<int> sets[],int current,int mask)
{

    if(mask&((1<<N)-1))
       {
           return 1;
       }
    int res=0;
    for(int i=0;i<N;i++)//here i is the position
    {


        if(!(mask&(1<<i)))
        {
            check[N-1-i]=current;
            for(int m=0;m<N;m++)
                cout<<check[m]<<" ";
            cout<<"\n";
            int ok;
            for(int j=0;j<N-i-1;j++)
            {
                if(check[j]==0)
                continue;
                else
                {
                    int numchk=check[j];
                    ok=checknum(numchk,sets[current]);
                }
                 if(ok==0)
                    break;
            }
            if(ok==1)
            {
                cout<<"\nYES\n";
                res+=findsol(N,sets,current-1,mask|(1<<i));
            }

        }
        memset(check,0,sizeof(check));
    }
    return res;
}
ll solve(int n)
{
    vector<int> sets[n+1];
    for(int i=1;i<=n-1;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if((i&j)==j)
            sets[i].push_back(j);
        }
    }
    int check[n];
    int flag=0;
    ll ans = findsol(n,sets,n,0);
    return ans;
}
int main()
{
    int n;
    cin>>n;
    ll ans =solve(n);
    cout<<ans;
    return 0;
}
