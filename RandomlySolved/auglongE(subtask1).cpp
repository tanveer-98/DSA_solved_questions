#include<bits/stdc++.h>
using namespace std;
int present[101]={0};
int solve(int n,int k,int F[])
{
    int tables=1;
    for(int i=0;i<n;i++)
    {
     if(!present[F[i]])
     {
         present[F[i]]++;
     }
     else
     {

        //not including
        memset(present,0,sizeof(present));
        present[F[i]]++;
        tables++;
     }
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(k!=1)
            cout<<1<<"\n";
        else{
              int F[1001];
        for(int i=0;i<n;i++)cin>>F[i];
        memset(present,0,sizeof(present));
        int ans=solve(n,k,F);
        cout<<ans<<"\n";
        }


    }
}

