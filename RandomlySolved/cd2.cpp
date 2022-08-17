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
    int n;
    cin>>n;
    int sumd1=0,sumd2=0,sumb=0;
    int arr[n][n];
    fri(0,n)
    {
        frj(0,n)
        {
            cin>>arr[i][j];
            if(i==j)sumd1+=arr[i][j];
            if (i+j==n-1)sumd2+=arr[i][j];

        }

    }
    sumb=arr[0][0]+arr[0][n-1]+arr[n-1][n-1]+arr[n-1][0];
   int total;
    if(n&1)
     total=sumd1+sumd2+sumb-arr[n/2][n/2];
    else total=sumd1+sumd2+sumb;
    cout<<total<<endl;
    cout<<"sumd1"<<sumd1<<endl;
    cout<<"sumd2"<<sumd2<<endl;
    cout<<"sumb"<<sumb<<endl;

	return 0;
}
