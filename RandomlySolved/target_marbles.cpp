
#include<bits/stdc++.h>
#define ll long long int
#define fri(s,e) for(int i=s;i<e;i++)
#define frj(s,e) for(int j=s;j<e;j++)
#define pb push_back
#define mp make_pair
#define pf push_front
#define veci vector<int>
#define vecb vector<bool>
#define f first
#define sec second
#define db double
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{

    int n,target;
    cin>>n>>target;
    int arr[n];
    fri(0,n)cin>>arr[i];
    int cur_sum=arr[0];
    int prev_index=0;
    int next_index;
    int found=0;
    for(int i=1;i<n;i++)
    {
        while(cur_sum>target&&prev_index<i-1)
        {

            cur_sum-=arr[prev_index];
            prev_index++;
        }

       if(cur_sum==target)
       {
           next_index=i-1;
           found=1;
           break;
        }
       cur_sum+=arr[i];

    }
    if(found==0)
    cout<<"false"<<endl;
    else if (found==1)
    {
        cout<<"true"<<endl;
       for(int i=prev_index;i<=next_index;i++)
        cout<<arr[i]<<" ";
    }
}
