#include<bits/stdc++.h>
#include<ctype.h>
#define ll long long int
#define fri(s,e) for(int i=s;i<e;i++)
#define frj(s,e) for(int j=s;j<e;j++)
#define db double
#define mod 1000000007
using namespace std;
vector<string> str;
bool isvowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    return true;
    else return false;
}

void findSubSeqRec(string s, int n,
           int index = -1, string curr = "")
{
    // base case
    if (index == n)
        return;


    for (int i = index + 1; i < n; i++) {

        curr += s[i];
        str.push_back(curr);
        findSubSeqRec(s, n,i, curr);

        // backtracking
        curr = curr.erase(curr.size() - 1);
    }
    return;
}
int countgoods()
{
    int result=0,count=0;
    for(int i=0;i!=str.size();i++)
    {
        for(int j=0;str[i][j]!='\0';j++)
        {
            if(isvowel(str[i][j]))
            count++;
        }
        if(count!=1)
        result++;
        count=0;
    }


    return result;
}
bool cmp(const string& a,const string& b)
{

return (a.size()<b.size())
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int goods=0;
        string s;
        cin>>s;

        findSubSeqRec(s,s.size());
        sort(str.begin(),str.end(),cmp);
        for(auto i=str.begin();i!=str.end();i++)
        cout<<*i<<endl;

        goods=countgoods();
        cout<<goods<<endl;
        cout<<"next test case::";


    }


    return 0;
}
