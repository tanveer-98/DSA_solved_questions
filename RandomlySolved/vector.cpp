#include<bits/stdc++.h>
#include<ctype.h>
#define ll long long int
#define fri(s,e) for(int i=s;i<e;i++)
#define frj(s,e) for(int j=s;j<e;j++)
#define db double
#define mod 1000000007
using namespace std;
bool cmp(const string& a,const string& b)
{

return (a.size()>b.size());
}
set<string,cmp> input;
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


int main()
{
        int n,k;
        cin>>n>>k;

        int goods=0;
        string s;
        cin>>s;
        int count=0;

        findSubSeqRec(s,s.size());

        input.insert("");


        int length=input.size();
        for(auto i=input.begin();i!=input.end();i++)
            cout<<*i<<endl;
       /* if(input.size()<k)
            cout<<-1<<endl;
        else
        {
            for(int i=0;i<k;i++)
            {
                count+=(n-input[i].size());
            }
        cout<<count<<endl;

        }*/



    return 0;
}
