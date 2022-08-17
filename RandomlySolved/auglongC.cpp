#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
       ll C,P;
       cin>>C>>P;
       int cnt1=0,cnt2=0;
       while(C>0)
       {
           if(C<10)
           {
               C=0;
               cnt1++;
           }
           else
           {
               int factor=C/9;
               C=C-factor*9;
               cnt1=cnt1+factor;
           }
       }
        while(P>0)
       {
           if(P<10)
           {
               P=0;
               cnt2++;
           }
           else
           {
               int factor=P/9;
               P=P-factor*9;
               cnt2=cnt2+factor;
           }
       }
       if(cnt1==cnt2)
            cout<<"1 1\n";
       else if(cnt1<cnt2)
            cout<<"0 "<<cnt1<<"\n";
       else
            cout<<"1 "<<cnt2<<"\n";
    }
	return 0;
}
