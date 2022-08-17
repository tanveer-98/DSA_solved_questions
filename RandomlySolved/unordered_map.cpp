#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
 unordered_map<int,vector<int>> umap;
 umap[1].pb(1);
 umap[1].pb(2);
 umap[1].pb(3);
 umap[1].pb(6);
 umap[1].pb(7);
 umap[1].pb(8);
 umap[1].pb(9);
 int d=1;
 vector<int> temp=umap[1];
 int mx=1,tmp=1;
  for(int i=0;i<temp.size();i++)
    cout<<temp[i]<<" ";
cout<<endl;
 for(int i=0;i<temp.size();i++)
 {
    if(temp[i+1]-temp[i]==d)
         {
                tmp++;
                mx=max(tmp,mx);

         }
         else
         {

                mx=max(mx,tmp);
                tmp=1;
         }
 }

cout<<mx<<endl;



return 0;
}
