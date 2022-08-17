
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
int arr[200005];
int cnt(int l,int r,int d)
{
     int mx=1,j,tmp=1;
     for(j=l-1;j<=r-2;j++)
     {
         if((arr[j+1]-arr[j])==d)
         {

                tmp++;
                if(j==r-2)
            {
                mx=max(tmp,mx);
            }
         }
         else
         {
             int temp=max(mx,tmp);
             mx=temp;
             tmp=1;
         }
     }

     return mx;
}
int main()
{
        fast
        int n,q;
        cin>>n>>q;
        fri(0,n)cin>>arr[i];
        while(q--)
        {
            int L,R,D;
            cin>>L>>R>>D;
            int mx=cnt(L,R,D);
            cout<<mx<<endl;


        }
        return 0;
}
