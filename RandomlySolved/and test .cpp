#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> sets[n+1];
    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if((i&j)==i)
            sets[i].push_back(j);
        }

    }
    for(int i=1;i<n;i++)
    {
        cout<<"index : "<<i<<" \n";

        for(int j=0;j<sets[i].size();j++)
        {
            cout<<sets[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
