
#include <iostream>
#include<algorithm>
#include<string>
#include<set>
#include<vector>
#define ll long long int
using namespace std;
set<string>s;

void printSubSeqRec(string str, int n,int index = -1, string curr = "")
{

    if (index == n)
        return;

     s.insert(curr);

    for (int i = index + 1; i < n; i++) {

        curr += str[i];
        printSubSeqRec(str, n, i, curr);

        curr = curr.erase(curr.size() - 1);
    }
    return;
}


void printSubSeq(string str)
{
    printSubSeqRec(str, str.size());
}


int main()
{
    int n,k;
    cin>>n>>k;
    cin.ignore();

    string str;
    cin>>str;
    printSubSeq(str);

    ll len=s.size();
    int cost=0;
    int c=0;

    sort(s.begin(),s.end());

    if(len<k)
    cout<<-1<<endl;
    else
    {
        for(auto i=s.rbegin();i!=s.rend();i++)
        {
        if(c<k)
        {
           string temp="";
           temp=temp+*i;
           cost=cost+(n-temp.length());
           temp="";
           c++;
        }
        }
        cout<<cost<<endl;

    }

    return 0;
}
