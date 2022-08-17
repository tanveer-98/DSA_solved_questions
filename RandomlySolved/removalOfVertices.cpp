#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,base,power,shift,ans;
        cin>>n>>k;

        ll start;

        //calculating the starting position

        if(n&1)
        {
            k=k%n;
            if(k<=n/2-1) start=2*(k+1);
            else start=2*(k-n/2)+1;
        }
        else
        {
            start=2*(k%(n/2)+1);
        }

        //cout<<"start "<<start;
         shift=start-1;
         power=floor(log2(n));
         base=pow(2,power);
         ans=n-base;
         ans=ans*2;
         //cout<<ans;
         //shifting ans by start
         if(ans+shift<=n)
            cout<<ans+shift<<"\n";
         else{
            ans=(ans+shift)-n;
            cout<<ans<<"\n";
         }

    }

    return 0;
}
