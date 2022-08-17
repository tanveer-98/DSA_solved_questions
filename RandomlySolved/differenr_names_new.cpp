
#include<bits/stdc++.h>
#include<unordered_map>
#include<vector>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int length=s.length();
    unordered_map<string,int> names;
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
    int l2=vec.size();
    for(int i=0;i<l2;i++)
    {
        string t=vec[i];
       names[t]++;
    }
    int flag=0;
     unordered_map<string, int>::iterator itr;
	 for (itr = names.begin(); itr != names.end(); ++itr)
    {
            if(itr->second>1)
       {

        cout<< itr->first<<" "<< itr->second << '\n';
            flag=1;
      }
    }
    if(flag==0)
        cout<<-1;


	return 0;
}


