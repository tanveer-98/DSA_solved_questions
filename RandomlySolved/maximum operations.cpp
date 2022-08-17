#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll xoronacci(ll n, ll a, ll b)
{
    if (n == 0)
        return a;
    if (n == 1)
        return b;
    if (n == 2)
        return (a ^ b);

    return xoronacci(n % 3, a, b);
}
 ll togglebit(ll n)
{
    if (n == 0)
        return 1;
    ll i = n;
    n |= n >> 1;
    n |= n >> 2;
    n |= n >> 4;
    n |= n >> 8;
    n |= n >> 16;

    return i ^ n;
}


ll xnor(ll num1, ll num2)
{

    if (num1 < num2)
        swap(num1, num2);
    num1 = togglebit(num1);

    return num1 ^ num2;
}
ll nextterm[3];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        ll xr=xoronacci(n-1,a,b);
        ll xnr;
        if(n>2)
        {
              for(int i=2;i<=4;i++)
            {

                nextterm[i-2]=xnor(a,b);
                a=b;
                b=nextterm[i-2];
            }
            n=n-2;
            n=n%3;
            xnr=nextterm[n-1];
        }
        else{
            if(n==1)
                xnr=a;
            else xnr=b;
        }
        ll result=max(xr,xnr);
        cout<<result<<endl;


    }
    return 0;

}
