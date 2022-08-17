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
int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {

        int n,q;
        cin>>n>>q;
        ll arr[n+1];
        arr[0]=0;
        fri(1,n+1)cin>>arr[i];

        while(q--)
        {
            ll cnt =0;
            ll L,R,y;
            cin>>L>>R>>y;
            ll counter=0;
            for(int i=L;i<=R;i++)
            {
              if(arr[i]==y)
                cnt++;
              else if( arr[i]>y)
              {
                  if(counter==1)
                    continue;
                  else if (counter==-1)
                  {
                      cnt++;
                      counter=1;
                  }
                  else if (counter==0)
                  {
                      counter=1;
                  }
              }
              else
              {
                  if(counter==-1)
                    continue;
                  else if (counter==1)
                  {
                      counter=-1;
                      cnt++;
                  }
                  else if (counter==0)
                  {
                      counter=-1;
                  }
              }

            }
            cout<<cnt<<endl;


        }
    }
return 0;
}
