#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int present[101]={0};
int visited[101]={0};
ll solve(int n,int k,int F[])
{

    int tables=1;
    ll cost=0;
    int startindex=0;
    int conflicts=0;
    if(n==1)
        return tables*k;

    for(int i=0;i<n;i++)
    {
       // cout<<"index "<<i<<"\n";
        ll cost1=0,cost2=0;

        if(!present[F[i]])
        {
            present[F[i]]++;
        }
        else
        {


            //including
            present[F[i]]++;
            //cout<<"start index ="<<startindex<<"\n";
            //cout<<"Present[F[i]]= "<<present[F[i]]<<"\n";
            for(int index=startindex;index<=i;index++)
            {
                if(!visited[F[index]])
               {
                   if(present[F[index]]>1)
                    {
                        conflicts+=present[F[index]];
                        visited[F[index]]=1;
                    }
               }
            }
            cost1=conflicts+tables*k;
            //cout<<"cost1 "<<cost1<<"\n";
            //not including
            tables++;
            cost2=tables*k;
           // cout<<"cost2 "<<cost2<<"\n";
            if(cost1<cost2)
            {
                conflicts=0;
                memset(visited,0,sizeof(visited));
                //cout<<"i "<<i<<"case 1\n";
                tables--;
                cost=cost1;
            }
            else
            {
                startindex=i;
              //  cout<<"i "<<"case 2\n";
                conflicts=0;
                memset(present,0,sizeof(present));
                memset(visited,0,sizeof(visited));
                present[F[i]]++;
                cost=cost2;

            }
        }
    }
    if(cost==0)
       return tables*k;
    return cost;
}
ll solve2(int n,int k ,int F[])
{

    int tables=1;
    ll cost=0;
    int startindex=0;
    int conflicts=0;
    if(n==1)
        return tables*k;

    for(int i=0;i<n;i++)
    {
       // cout<<"index "<<i<<"\n";
        ll cost1=0,cost2=0;

        if(!present[F[i]])
        {
            present[F[i]]++;
        }
        else
        {


            //including
            present[F[i]]++;
            //cout<<"start index ="<<startindex<<"\n";
            //cout<<"Present[F[i]]= "<<present[F[i]]<<"\n";
            for(int index=startindex;index<=i;index++)
            {
                if(!visited[F[index]])
               {
                   if(present[F[index]]>1)
                    {
                        conflicts+=present[F[index]];
                        visited[F[index]]=1;
                    }
               }
            }
            cost1=conflicts+tables*k;
            //cout<<"cost1 "<<cost1<<"\n";
            //not including
            tables++;
            cost2=tables*k;
           // cout<<"cost2 "<<cost2<<"\n";
            if(cost1<cost2)
            {
                conflicts=0;
                memset(visited,0,sizeof(visited));
                //cout<<"i "<<i<<"case 1\n";
                tables--;
                cost=cost1;
            }
            else
            {
                startindex=i;
              //  cout<<"i "<<"case 2\n";
                conflicts=0;
                memset(present,0,sizeof(present));
                memset(visited,0,sizeof(visited));
                present[F[i]]++;
                cost=cost2;

            }
        }
    }
    if(cost==0)
       return tables*k;
    return cost;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int F[1001];
        int frequencies[101]={0};
        for(int i=0;i<n;i++)
        {
            cin>>F[i];
            frequencies[F[i]]++;
        }
        int mx=*max_element(frequencies,frequencies+101);
        if(mx<=k)
        {
           memset(present,0,sizeof(present));
            ll ans=solve(n,k,F);
            cout<<ans<<"\n";
        }
        else
        {

            memset(present,0,sizeof(present));
            ll ans=solve2(n,k,F);
            cout<<ans<<"\n";
        }





    }
}

