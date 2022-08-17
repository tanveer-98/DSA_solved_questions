#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        cin.ignore();
        string S,P;
        cin>>S>>P;
        ll l1=S.length();
        ll l2=P.length();
        ll f1[26]={0};
        ll f2[26]={0};
        char first=P[0];
        for(int i=0;i<l1;i++)
        {
            f1[S[i]-'a']++;
        }
        for(int i=0;i<l2;i++)
        {
            f2[P[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            f1[i]=f1[i]-f2[i];
        }
        string temp="";
        string temp2="";
        for(int i=0;i<26;i++)
        {
           if('a'+i==first)
           {

               temp2+=P;
              // cout<<"YES\n";
               while(f1[i]--)
               {
                  // cout<<"YES2\n";
                   char s=('a'+i);
                   temp2.push_back(s);
                   temp.push_back(s);

               }

               temp+=P;
           }
           else
           {
              // cout<<"YES3\n";
               if(f1[i]==0)
                continue;
               else
               {
                   while(f1[i]--)
                   {
                       //cout<<"YES4\n";
                       char s=('a'+i);
                       temp2.push_back(s);
                        temp.push_back(s);

                   }
               }
           }
        }
        //cout<<temp2<<"\n";
        //cout<<temp<<"\n";
        if(temp2>temp)
            cout<<temp<<"\n";
        else cout<<temp2<<"\n";
    //cout<<"size "<<temp.size()<<"\n";




    }
	return 0;
}
