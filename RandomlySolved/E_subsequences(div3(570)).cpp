#include<bits/stdc++.h>
#include<ctype.h>
#define ll long long int
#define fri(s,e) for(int i=s;i<e;i++)
#define frj(s,e) for(int j=s;j<e;j++)
#define db double
#define mod 1000000007
using namespace std;
set<string> input;
vector<string> str;

void findSubSeqRec(string s, int n,
           int index = -1, string curr = "")
{
    if (index == n)
        return;


    for (int i = index + 1; i < n; i++) {

        curr += s[i];
        input.insert(curr);
        findSubSeqRec(s, n,i, curr);

        curr = curr.erase(curr.size() - 1);
    }
    return;
}
bool cmp(const string& a,const string& b)
{

return (a.size()>b.size());
}

int main()
{
        int n,k;
        cin>>n>>k;

        int goods=0;
        string s;
        cin>>s;
        int count=0;

        findSubSeqRec(s,s.size());
        for(auto i=input.begin();i!=input.end();i++)
            str.push_back(*i);
        sort(str.begin(),str.end(),cmp);
        str.push_back("");
        int length=str.size();

        if(str.size()<k)
            cout<<-1<<endl;
        else
        {
            for(int i=0;i<k;i++)
            {
                count+=(n-str[i].length());
            }
        cout<<count<<endl;

        }



    return 0;
}
