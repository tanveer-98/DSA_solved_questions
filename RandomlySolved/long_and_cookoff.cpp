#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define li long int
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define nl "\n"
#define ff first
#define ss second
#define pb push_back
#define po pop_back()
#define mp make_pair using namespace std;
int leapYear(int y)
{
     if(y%400 == 0)
        return 1;
if(y%4==0 && y%100!=0)
    return 1;
return 0;
}
 int main()
 {
     fastIO;
     int x=1,i,sum;
     int february[401];
     february[0] = 0;
     february[400] = 0;
     for(i=399;i>=1;i--)
        {
            x--;
            if(leapYear(i))
                x--;
            if(x < 1)
                x += 7;
            if(x == 5)
                february[i] = 1;
            else if(x == 6)
                {
                    if(leapYear(i)) february[i] = 0;
                    else february[i] = 1;
                }
            else february[i] = 0;
            }
             for(i=1;i<401;i++)
                february[i] += february[i-1];
             sum = february[400];
             li t;
             cin>>t;
            while(t--)
                {
                    int m1,m2,q1,q2,r1,r2;
                    li y1,y2;
                    cin>>m1>>y1;
                    cin>>m2>>y2;
                    if(m1>2)
                    y1++;
                    if(m2<2)
                        y2--;
                    if(y1>y2)
                        cout<<"0"<<endl;
                    else
                    {

                        q1=y1/400;
                        q2=y2/400;
                        r1=y1%400;
                        r2=y2%400;
                        if(r1==0)r1=1;
                        cout<<(sum*(q2-q1)+february[r2]-february[r1-1])<<endl;
                    }
                }


 }

#define f first
#define sec second
#define db double
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
/*ll power(ll x,ll y)
{
    ll res=1;
    while(y>0)
    {
        if(y%2==1)
            res=(res*x)%mod;
        x=(x*x)%mod;
        y=y/2;
    }
    return res;
}*/
int main()
{

    int t;cin>>t;
    while(t--)
    {
        ll i;
        ll n;
        cin>>n;
        ll k;

        cin>>k;
        ll arr[n];
        fri(0,n)scanf("%d",&arr[i]);
        if(k>n)
        {
            while(k>0)
            {
                k=k-n;
                if(k>n)
                {
                    for(i=0;i<n;i++)
                    arr[i]=arr[i]^arr[n-1-i];
                }
                else
                {
                    for(i=0;i<k;i++)
                    arr[i]=arr[i]^arr[n-1-i];
                }
                if(k<n)
                k=0;
            }
        }
        else
        {
            for(i=0;i<k;i++)
            arr[i]=arr[i]^arr[n-1-i];
        }
        fri(0,n)printf("%d ",arr[i]);
        printf("\n");
    }


    return 0;
}

