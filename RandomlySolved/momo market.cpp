#include<bits/stdc++.h>
#define ll long long int
#define fri(s,e) for(int i=s;i<e;i++)
using namespace std;
int binsrch(ll sum[],int x,int start,int end)
{
    int lo=start,hi=end;
    // [lo, hi] is the search range, but hi will never be inspected.
	while (lo<hi){
        int mid = (lo + hi) /2;// 2
            if(sum[mid]<x)
             lo=mid+1;
            else if(sum[mid]>x)
             hi=mid;
             else{
                return mid+1;
             }
        }
        if(lo>start)
        return lo;
        else if(lo==0&&sum[lo]==x)
        return -2;
        else return -1;
}
int main()
{

    int n,q;
    cin>>n;
    ll arr[n],x;
    fri(0,n)cin>>arr[i];
    cin>>q;
    //creating sum array
    ll sum[n]={0};
    sum[0]=arr[0];
    cout<<sum[0]<<" ";
    fri(1,n)
    {
        sum[i]=arr[i]+sum[i-1];
        cout<<sum[i]<<" ";
    }


    while(q--)
    {
        cin>>x;
        int position=binsrch(sum,x,0,n-1);
        if(position==-1)
        {
             cout<<position+1<<" "<<x<<"\n";
        }
        else if(position==-2)
        {
             cout<<1<<" "<<0<<"\n";
        }
        else
            cout<<position<<" "<<x-sum[position-1]<<"\n";
       // memset(sum,0,n);

    }



	return 0;
}
