#include<bits/stdc++.h>
#define ll long long int
#define fri(s,e) for(int i=s;i<e;i++)
#define frj(s,e) for(int j=s;j<e;j++)
#define pb push_back
#define pf push_front
#define f first
#define sec second
#define db double
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    int l1,l2;
    cin>>l1>>l2;
    string s1,s2;
    cin>>s1;
    cin.ignore();
    cin>>s2;
    int window=l2;
    vector<int>freq1;

   vector<int>freq2;

   freq2.resize(27);
    fri(0,l2)
    freq2[s2[i]-'a']++;
   // memset(myarray, 0, sizeof(myarray))
   int count=0;
    for(int i=0;i<l1;i++)
    {
        freq1.resize(27);
        int left=i;
        int right=window-1+i;
        for(int j=i;j<i+window;j++)
        {
            freq1[s1[j]-'a']++;
        }
        if(freq1==freq2)
        count++;
        freq1.resize(0);
     }
     cout<<count;
    return 0;
}
