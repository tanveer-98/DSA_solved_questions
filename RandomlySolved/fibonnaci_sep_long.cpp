#include<iostream>
#include<cmath>
#include<vector>
#include<set>
#include<utility>
#define ll long long int
#define fri(s,e) for(int i=s;i<e;i++)
#define frj(s,e) for(int j=s;j<e;j++)
#define pb push_back
#define pf push_front
#define f first
#define sec second
#define db double
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
ll arr[61];
int power(int base,int raiseto)
{

    if(raiseto==0)
        return 1;
    else return (base*power(base,raiseto-1))%60;
}
int main()
{
    arr[1]=0;
    arr[2]=1;
    for(int k=3;k<=60;k++)
    arr[k]=(arr[k-1]+arr[k-2])%10;
    //for(int i=1;i<=60;i++)
    //cout<<arr[i]<<" ";
    //cout<<endl;
    int t;cin>>t;
    while(t--)
    {
     ll n;
     cin>>n;
     float raise=(int)(log(n)/log(2));
     //cout<<"raise to:  "<<raise<<endl;
     int position;
     position=power(2,raise);
     //cout<<"position"<<position<<endl;
     cout<<arr[position]<<endl;

    }


    return 0;
}
