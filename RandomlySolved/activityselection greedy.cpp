//activity selection greeedy algo
#include<bits/stdc++.h>
using namespace std;
bool sortbyval(pair<int,int> &a,pair<int,int> &b)
{

    return a.second<b.second;
}
void solve(pair<int ,int> p[],int n)
{
    int counter=0;
    int start,ed=p[0].second;
    int cnt=1;
    for(int i=1;i<n;i++)
    {
           if(p[i].first>=ed)
           {
               cnt++;
               ed=p[i].second;
           }
    }
    cout<<cnt<<"\n";

}
int main()
{
   int n,start,finish;
   cin>>n;
   pair<int,int> p[n];
   for(int i=0;i<n;i++)
   {

      cin>>start>>finish;
      p[i].first=start,p[i].second=finish;
   }
    sort(p,p+n,sortbyval);
    solve(p,n);
    return 0;
}
