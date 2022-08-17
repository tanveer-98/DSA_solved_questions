#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
       int l;
       cin>>l;
       string s;
       cin>>s;

       int freq[27]={0};
       for(int i=0;i<l;i++)
       {
           freq[s[i]-'a'+1]++;
       }
       int flag=0;

       for(int i=1;i<27;i++)
       {
           if(freq[i]&1)
           {
                   flag=1;
                   break;
           }
       }
       if(flag==1)
        cout<<"NO\n";
       else cout<<"YES\n";
    }
	return 0;
}

