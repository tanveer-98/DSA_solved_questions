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
unordered_map<int,vector<int>> umap;
vector<int>dp;
void solve(int n){
    int temp;
        for(int i=1;i<=n-1;i++)
        {
            temp=dp[i+1]-dp[i];
            umap[temp].pb(i);
        }
        cout<<"printing the umap"<<endl;

        for(auto x:umap)
        {
            cout<<"key :"<<x.first<<"->  ";
            vector<int> temp=x.second;
            for(int i=0;i<temp.size();i++)
                cout<<temp[i]<<" ";
            cout<<endl;
        }


}
bool cnt(int d)
{
    if(umap.count(d)>0)
        return true;
    else return false;
}
void calculate(int l,int r,int d,int n)
{
    int mx=1,tmp=1;
    vector<int>temp;
    temp=umap[d];
    int i=0;
        int flag=0;
    while(temp[i]<r)
    {
        if(temp[i]>=l)
        {
            if(temp[i+1]-temp[i]==1)
            {
                    tmp++;
                    mx=max(tmp,mx);

            }
            else
            {
                tmp++;
                mx=max(mx,tmp);
                tmp=1;
            }
        }
        i++;
    }

    cout<<mx<<endl;
    temp.clear();
}
int main()
{
    fast
    int n,q;
    cin>>n>>q;
    dp.pb(400000);
    int temp;
    fri(1,n+1)
    {
        cin>>temp;
        dp.pb(temp);
    }
    solve(n);
    while(q--)
    {
        int l,r,d;

        cin>>l>>r>>d;


            if(l==r||n==1)
                cout<<1<<endl;
            else
            {
                if(cnt(d))
                    calculate(l,r,d,n);
                else cout<<0<<endl;
            }


    }


    return 0;
}
