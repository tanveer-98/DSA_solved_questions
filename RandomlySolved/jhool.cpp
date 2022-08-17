#include<bits/stdc++.h>
#define ll long long int
#define fri(s,e) for(int i=s;i<e;i++)
#define frj(s,e) for(int j=s;j<e;j++)
#define pb push_ back
#define pf pushfront
#define f first
#define sec second
#define db double
#define mod 1000000007
using namespace std;
int breaker=0;
int main()
{
    string s;
    cin>>s;

    for(int i=0;i!=s.length();i++)
    {
        if(breaker==5)
        {
            break;
        }
        else
        {
        if(s[i]==s[i+1])
        {
         breaker++;
        }
        else
        {
           breaker=0;
        }
        }



    }
    if(breaker==5)
    cout<<"Sorry, sorry!";
    else
    cout<<"Good luck!";


    return 0;
}
