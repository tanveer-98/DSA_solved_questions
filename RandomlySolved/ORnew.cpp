#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
int main()
{
int test;
   cin>>test;
    while(test--)
    {
       ll A,B;
        cin>>A>>B;
        set<ll> st;

    for(ll i=A;i<=B;i++)
        for(ll j=i;j<=B;j++)
            {
                st.insert(i|j);
            }
  //ll length=st.size();
    set<ll>::iterator it;
    for(it=st.begin();it!=st.end();it++)
        cout<<*it<<" ";
        cout<<" \n"<<st.size();
        cout<<"\n";
    ll p=log2(B);
    //cout<<p<<"\n";
    ll rightmost_power_of_two=pow(2,p);
    if(rightmost_power_of_two>A&&rightmost_power_of_two<=B)
    {
         //cout<<"power of 2-> "<<rightmost_power_of_two<<"\n";
    ll ans=(rightmost_power_of_two-A)+(B-A+1);
    ll a =B-rightmost_power_of_two;
    ll b=A-1;
    if(a>b)
        ans-=(a-b);
    cout<<ans<<"\n";

    }
    else
    {     int flag=0;
         if(A%2==0)
          flag=1;

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
        if(flag==0)
        cout<<ans<<"\n";
        else cout<<ans-1<<"\n";
    }

   }





    return 0;
}
