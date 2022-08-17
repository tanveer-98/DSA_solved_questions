#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int mn=min(a,b);
        int mt=a+b;
        mt=mt-mn;
        int mx=max(2*mn,mt);
        cout<<mx*mx<<"\n";


    }

    return 0;
}
