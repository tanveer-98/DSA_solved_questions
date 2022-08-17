#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
string commonPrefixUtil(string str1, string str2)
{
    string result;
    int n1 = str1.length(), n2 = str2.length();
    for (int i=0, j=0; i<=n1-1&&j<=n2-1; i++,j++)
    {
        if (str1[i] != str2[j])
            break;
        result.push_back(str1[i]);
    }

    return (result);
}
int main()
{
   // time_t current_time;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<string>words;
    words.resize(n);
    for(int i=0;i<n;++i)
        cin>>words[i];
    int count1=0;
    int cnt=0;
    for(int i=0;i<n-1;++i)
    {
        for(int j=i+1;j<n;j++)
        {
            if(i==j)continue;
            string cmn=commonPrefixUtil(words[j],words[i]);
            //cout<<cmn<<endl;
            cnt=(cnt+(cmn.length()*cmn.length())%mod)%mod;

        }
        count1=(count1+cnt)%mod;
        cnt=0;
    }
    cout<<count1<<endl;




    return 0;
}
