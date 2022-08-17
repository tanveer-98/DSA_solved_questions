#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
int main()
{

       ll A,B;
        cin>>A>>B;
        set<ll> st;
    ll p=log2(B);
    //cout<<p<<"\n";
    ll rightmost_power_of_two=pow(2,p);
    if(rightmost_power_of_two>=A&&rightmost_power_of_two<=B)
    {
         //cout<<"power of 2-> "<<rightmost_power_of_two<<"\n";
    ll ans=(rightmos t_power_of_two-A)+(B-A+1);
    ll a =B-rightmost_power_of_two;
    ll b=A-1;
    if(a>b)
        ans-=(a-b);
    cout<<ans<<"\n";

    }
    else
    {
        ll H=pow(2,p+1);
        H=H-1;
        A=A&(H>>1);
        B=B&(H>>1);
        ll pnew=log2(B);
        ll rnew=pow(2,pnew);
         ll ans=(rnew-A)+(B-A+1);
        ll anew =B-rnew;
        ll bnew=A-1;
        if(anew>bnew)
        ans-=(anew-bnew);
        cout<<ans<<"\n";
    }






    return 0;
}
