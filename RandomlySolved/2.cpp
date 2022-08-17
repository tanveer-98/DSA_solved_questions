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
#define db double
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    fast
    int t;cin>>t;
    while(t--)
    {
      int n;
        cin>>n;
        ll A[n+1],rem[n+1];
        ll k;
        cin>>k;
        int sum=0;
        fri(1,n+1){
            cin>>A[i];
            sum=sum+(A[i]%k);

        }
        cout<<sum%k;


    }


    return 0;
}
