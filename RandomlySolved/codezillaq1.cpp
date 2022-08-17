#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;

    string s,ans="";
    cin>>s;





    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        ans+="a";
        else if(s[i]=='2')
        ans+="bb";
        else if(s[i]=='3')
        ans+="ab";
        else if(s[i]=='4')
        {
            for(int j=0;j<ans.length();j++)
            {
                if(ans[j]=='a')
                ans[j]='b';
                else
                ans[j]='a';
            }
        }

    }
    cout<<ans<<endl;





    return 0;
}
