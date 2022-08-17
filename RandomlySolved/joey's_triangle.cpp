#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        ll n;
        cin>>n;
        if(n==0)
        cout<<"NO"<<endl;
        else
        {
            ll anssquared=n*n;
            if(anssquared%3==0)
            {

                cout<<"YES"<<endl;
                cout<<int(sqrt(sqrt((16*anssquared)/3)))<<endl;
             }
            else cout<<"NO"<<endl;

        }
    }
}
