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
bool prime[1000000];
void SieveOfEratosthenes()
{
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=1000000; p++)
    {

        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=1000000; i += p)
                prime[i] = false;
        }
    }
  }
bool IsPrime(int number)
{
   int root = sqrt(number) ;
   for(int i=2; i<=root; i++)
   {
      if(number%i == 0)
          return false;
   }
   return true;
}
int main()
{
    int t;cin>>t;
   // SieveOfEratosthenes();
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        fri(0,n)
        cin>>arr[i];
        int cnt=0;
        SieveOfEratosthenes();
        fri(0,n)
        {
            if(arr[i]<=999999&&prime[arr[i]])
                cnt++;
            else if(arr[i]>999999&&IsPrime(arr[i]))
                cnt++;

        }
        cout<<cnt<<endl;
    }


    return 0;
}
