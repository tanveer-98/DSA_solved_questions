
#include<bits/stdc++.h>
typedef long long ll;
typedef long long int lli;
#define fri(s,e) for(int i=s;i<e;i++)
#define frj(s,e) for(int j=s;j<e;j++)
#define db double
#define fint(a) fastscanint(a)
#define fll(a) fastscanll(a)
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main()
{

   int n;
   cin>>n;
   string s1,s2;
   cin>>s1>>s2;

  int days=0;

   for(int i=0;i<n;i++)
   {
       if(s1[i]-64>s2[i]-64)
       {
           days=days+(26-s1[i]+s2[i])/13+(26-s1[i]+s2[i])%13;
       }
       else if(s1[i]-64<s2[i]-64)
       {
           days=days+(s2[i]-s1[i])/13+(s2[i]-s1[i])%13;

       }
       else
       continue;
   }

   cout<<days<<endl;

    return 0;
}
