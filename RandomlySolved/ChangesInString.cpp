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
#define nl “\n
void solve(int length,string s)
{
    int mn=INT_MAX;
    //creating a temp string;
    string temp="";
    int tl=length;
    while(tl--)
    {
        temp+="B";
    }
    for(int i=1;i<=length+1;i++)
    {
        int sum=0;
        int j=0;
        while(j<length)
        {
            sum+=abs(temp[j]-s[j]);
            j++;
        }
        mn=min(mn,sum);
        temp[i-1]='A';
    }

    cout<<mn<<"\n";
}
int main()
{
    fast
    int t;cin>>t;
    while(t--)
    {
        int length;
        cin>>length;
        string s;
        cin>>s;
        if(length==1)
        cout<<"0\n";
        else if (length==2)
        {
            if(s=="BB"||s=="AA"||s=="AB")
            cout<<"0\n";
            else cout<<"1\n";
        }
        else
        {
            solve(length,s);
        }
    }
    return 0;
}
