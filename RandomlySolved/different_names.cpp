#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int length=s.length();
    vector<string> vec;
    string temp="";
    int cnt=0;
    for(int i=0;i<=length;i++)
    {
        if(s[i]!=' '&&s[i]!='\0')
        temp+=s[i];
        else
        {
            vec.push_back(temp);
            temp="";
        }
    }
    sort(vec.begin(),vec.end());
    int l2=vec.size();
    for(int i=0;i<l2;i++)
    {
        cout<<vec[i]<<endl;
    }


    return 0;
}
