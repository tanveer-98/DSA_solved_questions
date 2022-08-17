#include<bits/stdc++.h>

#define ll long long int
#define fri(s,e) for(int i=s;i<e;i++)
#define frj(s,e) for(int j=s;j<e;j++)
#define pb push_back
#define pf pushfront
#define f first
#define sec second
#define db double
#define mod 1000000007
using namespace std;


int main()
{
    int k;
    cin>>k;
    int n,m;
    cin>>m>>n;
    cin.ignore();
    vector<string> myvec;
    string temp="";

    fri(0,k)
    {
     cin>>temp;
     cin.ignore();
     myvec.pb(temp);
     temp="";
    }


    int mars,extra=0;

    mars=count(myvec.begin(),myvec.end(),"Mars");
    mars=mars+count(myvec.begin(),myvec.end(),"mars");

    int rest=k-mars;
    if(rest==0)
    {
        if(mars>=m)
       {
        m=0;
        extra=m+n;
       }
       else
       {

           m=m-mars;
           extra=m+n;
       }

    }
    else
    {
        if(mars==0)
        {
            if(rest>m+n)
                extra=0;
            else
                extra=m+n-rest;

        }
        else if(mars<m)
        {
            m=m-mars;
            if(rest>=m)
            {

                rest=rest%m;
                m=0;

                extra=n-rest;
            }
            else
            {
                m=m-rest;
                extra=m+n;
            }
        }
        else
        {
            m=0;
        if(rest>=n)
            n=0;
        else{
            n=n-rest;
        }
        extra=m+n;


        }
    }
cout<<extra;

    return 0;
}
