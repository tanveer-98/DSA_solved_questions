/*
You are given a string s of n characters. A string is acceptable if exactly one of the following conditions is met -

1.It only consists of vowels.
2.It doesn't contain any vowels.
Find all the acceptable substrings of s in any order.
*/

#include<bits/stdc++.h>
#include<string>
#define ll long long int
using namespace std;
int isvowel(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        return 1;
    else return 0;
}
int check(string sub)
{
    int flag=0;
    int l=sub.length();
    for(int i=0;i<l;i++)
    {
        if(flag==0)

        {
            if(isvowel(sub[i]))
            {
                flag=-1;
            }
            else flag=1;

        }
        else if(flag==-1)
        {
            if(!isvowel(sub[i]))
                return 0;
        }
        else if(flag==1)
        {
             if(isvowel(sub[i]))
                return 0;
        }
    }
    return 1;
}
string substring(string s,int index1,int index2)
{
    string temp="";
    for(int i=index1;i<=index2;i++)
    {
        temp+=s[i];
    }
    return temp;
}
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int lenght=s.length();
    vector<string> vec;
    long long cnt=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            //cout<<"index "<<j<<" "<<j+i<<"\n";
            if(i==1)
            {
                string temp="";
                temp+=s[j];
                    vec.push_back(temp);
                    //cout<<s[j]<<"\n";
                    cnt++;
            }
            else
            {
                string sub=substring(s,j,j+i-1);
               // cout<<"sub "<<sub<<"\n";
                //cout<<"i"<<i<<"j"<<j<<endl;
                //cout<<"\n"<<"substring "<<sub<<"\n";
                if(check(sub))
                {
                    //cout<<"\ncorrect\n";
                    vec.push_back(sub);
                    //cout<<sub<<"\n";
                    cnt++;
                }


            }

        }

    }
    cout<<cnt<<"\n";
    for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<"\n";
    return 0;
}
