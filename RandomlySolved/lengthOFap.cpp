#include<bits/stdc++.h>
#define ll long long int
#define fri(s,e) for(int i=s;i<e;i++)
#define frj(s,e) for(int j=s;j<e;j++)
#define pb push_back
#define mp make_pair
#define pf push_front
#define veci vector<int>
#define vecb vector<bool>
#define f first
#define sec second
#define db double
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int dp[200000][2];
void solve(int n){
        for(int i=0;i<=n-2;i++)
            dp[i][1]=dp[i+1][0]-dp[i][0];
}
int cnt(int l,int r,int d){
       int mx=1,i,tmp=1,temp;
     for(i=l;i<=r-1;i++)
     {
         if(dp[i][1]==d)
         {
                tmp++;
                mx=max(tmp,mx);

         }
         else
         {
                temp=max(mx,tmp);
                mx=temp;
                tmp=1;
         }
     }
     return mx;
}
int main(){
        fast
        int n,q;
        cin>>n>>q;
        fri(0,n)cin>>dp[i][0];
        solve(n);
        while(q--)
        {
            int L,R,D;
            cin>>L>>R>>D;
            int mx=cnt(L-1,R-1,D);
            cout<<mx<<endl;
        }
    return 0;
}
