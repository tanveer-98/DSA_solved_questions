#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {

       int n;
       cin>>n;
       ll K,P[n];
       cin>>K;
       vector<ll> finals;
       for(int i=0;i<n;i++)
       {
           cin>>P[i];
           if(K%P[i]==0)
           finals.push_back(P[i]);


       }
       int siz=finals.size();
       //cout<<"\n";
       if(siz==0)
        cout<<"-1\n";
       else
       {
         sort(finals.begin(),finals.end());
         cout<<finals[siz-1]<<"\n";
       }

    }
	return 0;
}
