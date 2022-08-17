#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool compare(vector<int> a,vector<int> b)
{
 return a[1]<b[1];
}
int binarysearch(vector<int> workers[],int index)
{
    int lo=0,hi=index-1;
    while(lo<=hi)
    {
        int mid=(lo+hi)/2;
        if(workers[mid][1]<=workers[index][0])
        {
            if(workers[mid+1][1]<=workers[index][0])
                lo=mid+1;
            else
                return mid;
        }
        else
        hi=mid-1;
    }
    return -1;
}
ll FTP(vector<int> workers[],int n)
{
    ll inc=workers[0][2];
    ll table[n]={0};
    table[0]=inc;
    for(int i=1;i<n;i++)
    {
         inc=workers[i][2];
         int index=binarysearch(workers,i) ;
         if(index!=-1)
            inc+=table[index];
         table[i]=max(inc,table[i-1]);

    }
    return table[n-1];


}
ll solve(vector<int>  workers[],int n)
{
    sort(workers,workers+n,compare);
    return FTP(workers,n);

}
int main()
{
    int n;
    cin>>n;
    vector<int>  workers[n];
    for(int i=0;i<n;i++)
    {
        vector<int> temp;
        int start,finish,profit;
        cin>>start>>finish>>profit;
        temp.push_back(start);

        temp.push_back(finish);

        temp.push_back(profit);
        workers[i]=temp;
    }
    ll ans =solve(workers,n);
    cout<<ans;


}
/*
4
1 2 50
2 5 100
2 10 200
5 10 50
*/
