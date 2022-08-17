
#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
ll specialcase(ll A,ll B)
{




}
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
    if(rightmost_power_of_two==B)
    {
        ll ans=(rightmost_power_of_two-A)+(B-A+1);
        cout<<ans<<"\n";
    }
    else if(rightmost_power_of_two>A&&rightmost_power_of_two<B)
    {
         //cout<<"power of 2-> "<<rightmost_power_of_two<<"\n";
        ll ans=(rightmost_power_of_two-A)+(B-A+1);
        ll a =B-rightmost_power_of_two;
        // cout<<"a "<<a<<" \n";
        ll b=A-1;
        //cout<<"b "<<b<<" \n";
        if(a>=b)
        {
            ans-=(a-b);
            cout<<ans<<"\n";
        }
        else
        {
            ll psub=log2(B-rightmost_power_of_two);
            ll del=B-(rightmost_power_of_two+pow(2,psub));
            //cout<<"del "<<del<<"\n";
            ll extra=pow(2,psub)-1;
           // cout<<"extra "<<extra<<"\n";
            if((B-del+extra)-rightmost_power_of_two==rightmost_power_of_two-1)
               {
                   cout<<"hurray\n";
                    ans=B-del+extra-rightmost_power_of_two+(rightmost_power_of_two-A+1);
               }
            else
                ans=(rightmost_power_of_two-A)+(B-A+1)+extra-del;
            cout<<ans<<"\n";
          //  cout<<"fun"<<"\n";
        }

    }
    else if(rightmost_power_of_two==A)
    {
        ll ans;
        ll psub=log2(B-rightmost_power_of_two);
            ll del=B-(rightmost_power_of_two+pow(2,psub));
            //cout<<"del "<<del<<"\n";
            ll extra=pow(2,psub)-1;
           // cout<<"extra "<<extra<<"\n";

                ans=(B-A+1)+extra-del;
            cout<<ans<<"\n";
            //cout<<"fun"<<"\n";



    }
    else
    {
        ll H=pow(2,p+1);
        H=H-1;
        A=A&(H>>1);//cout<<"A "<<A<<"\n";
        B=B&(H>>1);//cout<<"B "<<B<<"\n";

        ll pnew=log2(B);
        ll rnew=pow(2,pnew);
         ll ans=(rnew-A)+(B-A+1);
        ll anew =B-rnew;
        ll bnew=A-1;
        if(anew>=bnew)
            {
                ans-=(anew-bnew);
                cout<<ans<<"\n";
            }
            else
            {
                ll psub=log2(B-rnew);
            ll del=B-(rnew+pow(2,psub));
            //cout<<"del "<<del<<"\n";
            ll extra=pow(2,psub)-1;
           // cout<<"extra "<<extra<<"\n";
            if((B-del+extra)-rnew==rnew-1)
               {
                  // cout<<"hurray\n";
                    ans=B-del+extra-rnew+(rnew-A+1);
               }
            else
                ans=(rnew-A)+(B-A+1)+extra-del;
            cout<<ans<<"\n";
           // cout<<"fun"<<"\n";
            }

    }

   }





    return 0;
}
