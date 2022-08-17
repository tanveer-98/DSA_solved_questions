#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{



    int t;
    cin>>t;
    while(t--)
    {


        int n;
        cin>>n;
        ll a[n],b[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        ll mina=INT_MAX,minb=INT_MAX;
        ll maxa=INT_MIN,maxb=INT_MIN;
        for(int i=0;i<n;i++)
        {
            mina=min(a[i],mina);
            minb=min(b[i],minb);
            maxa=min(a[i],maxa);
            maxb=min(b[i],maxb);

        }
        if(minb==maxb&&mina==maxa)
            cout<<"0\n";
        else
        {
            ll cnt1=0;
            ll cnt2=0;
            ll cnt3=0;
            for(int i=0;i<n;i++)
            {
                cnt1+=(a[i]-mina);
                cnt2+=(b[i]-minb);
                if(a[i]-mina>=1&&b[i]-minb>=1)
                    cnt3+=(min(a[i]-mina,b[i]-minb));
            }
            cout<<cnt1+cnt2-cnt3<<"\n";




        }
    }
}
