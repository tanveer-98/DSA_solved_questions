#include<bits/stdc++.h>
#include <map>
#include <set>
#include<algorithm>

using namespace std;
bool sortbysec(const pair<string,int>&a,const pair<string,int> &b)
{
    int l1=a.first.size();
    int l2=b.first.size();
    if(a.second!=b.second)
        return a.second<b.second;
    else
        return lexicographical_compare(&b.first,&b.first+l2,&a.first,&a.first+l1);
}
int main()
{
    int n;
    cin>>n;
    string names[n];
    int sub1,sub2,sub3;
    int ranks[n];
    pair<string,int> total[n];
    for(int i=0;i<n;i++)
    {

        cin>>names[i]>>sub1>>sub2>>sub3;
        int t=sub1+sub2+sub3;
        total[i]=make_pair(names[i],t);
    }
    sort(total,total+n,sortbysec);
    int cnt=1;
    for(int i=n-1;i>=0;i--)
    {
        cout<<cnt<<" "<<total[i].first<<" "<<total[i].second<<"\n";
        cnt++;
    }


	return 0;
}
