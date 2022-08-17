#include<bits/stdc++.h>
#define ll long long int
#define fri(s,e) for(ll i=s;i<e;i++)
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     ll n,m;
     cin>>n>>m;
     int F[n],P[n];
     fri(0,n)cin>>F[i];
     fri(0,n)cin>>P[i];
    int C[m+1]={0};
    int present[m+1]={0};
    fri(0,n)
    {
        if(present[F[i]]==0)
        {
            present[F[i]]=1;
             C[F[i]]+=P[i];
        }
        else
        {
              C[F[i]]+=P[i];
        }

    }
    /*cout<<"present"<<endl;
    fri(0,m+1)cout<<present[i]<<" ";
    cout<<endl;

    //sort(C+1,C+m+1);
    //fri(1,m+1)cout<<C[i];;
    //cout<<"end"<<endl;
    cout<<"count"<<endl;
    fri(0,m+1)cout<<C[i]<<" ";
    cout<<endl;*/

    int i=1;
    int mn=INT_MAX;
    while(i<m+1)
      {
          if(present[i]!=0)
          mn=min(mn,C[i]);
          i++;
      }


        //cout<<"i="<<i<<endl;
    cout<<mn<<endl;
    }
    return 0;
}
