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
#define nl printf("\n")
using namespace std;
bool prime[100001];
void Sieveprime() {
     memset(prime, true, sizeof(prime));
     prime[0]=false;
     prime[1]=false;
    for (int p=2; p*p<=100000; p++) {
        if (prime[p] == true) {
            for (int i=p*2; i<=100000; i += p)
                prime[i] = false;
}}}

int checksum(int n)
{
    if(n==0)
    return 0;
    else return n%10+checksum(n/10);
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<"printing primes"<<endl;
        fri(2,10)
        {

            if(prime[])
        }
        for(int i=n-1;i>=2;i--)
        {
            if(prime[i])
            {

                int sum=checksum(i);
                cout<<"sum"<<sum;
                if(prime[sum])
                    {
                        cout<<i;
                        break;
                    }
            }

        }
        nl;


    }


    return 0;
}
