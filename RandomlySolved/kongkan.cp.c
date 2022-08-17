#include<bits/stdc++.h>
#define ll  int
//#define mx 10000000
using namespace std;
int  main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string s,p;
        cin>>s>>p;
        vector<char>v;
        int  a=p[0]-'a';

        sort(s.begin(),s.end());
         //t<<"\n";
         int cs[26]={0},cp[26]={0};
         for(int j=0;j<s.length();j++)
         {
             cs[s[j]-'a']++;
         }
         for(int j=0;j<p.length();j++)
         {
             cp[p[j]-'a']++;
         }
         int c=0;
         for(int i=0;i<a;i++)
         {
            while(cs[i]>cp[i])
            {
                v.push_back(i+'a');
                cs[i]--;
            }
         }

         if(cs[a]>cp[a])
         {
             while(cs[a]>cp[a])
             {
                 v.push_back(a+'a');
                 cs[a]--;
             }
         }
         for(int i=0;i<p.length();i++)
         {
             v.push_back(p[i]);
         }
         for(int i=0;i<26;i++)
         {
             cs[i]=cs[i]-cp[i];
         }
         for(int i=0;i<26;i++)
         {
             while(cs[i]>0)
             {
                 v.push_back(i+'a');
                 cs[i]--;
             }
         }
         /*for(int i=0;i<c;i++)
         {
             while(cp[i]>0)
             {
                 v.push_back(i+'a');
                 cp[i]--;
             }
         }*/
         for(int i=0;i<v.size();i++)
         {
             cout<<v[i];
         }
         cout<<"\n";
         /*int d=0;
         for(int i=c;i<26;i++)
         {
             cs[i]=cs[i]-cp[i];
             while(cp[i]>0)
             {
                 v.push_back(i+'a');
                 cp[i]--;

             }

         }
         for(int i=0;i<n;i++)
         {
             if(cs[i]>0)
         }
         /*int i=0;
         while(s[i]<=a)
         {
             i++;
         }
         for(int j=0;j<i;j++)
         {
             v.push_back(s[j]);
         }*/
    }
}
