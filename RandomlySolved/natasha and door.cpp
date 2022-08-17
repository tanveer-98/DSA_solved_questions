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
#define nl “\n”
int main()
{
    int t;cin>>t;
    while(t--)
    {
     int n,k;
     cin>>n>>k;
     int arr[n+1];
     int sum[n+1]={0};
     int peakpositons[n+1]={0};
     fri(1,n+1)
      cin>>arr[i];
      fri(2,n)
      {
          if(arr[i-1]<arr[i]&&arr[i]>arr[i+1])
            { sum[i]=1;
                peakpositons[i]=1;
            }
      }
      fri(1,n+1){
        sum[i]+=(sum[i-1]);
      }
     /*fri(1,n+1)cout<<sum[i]<<" ";
     cout<<endl;*/

      //peak positions
    /*  fri(1,n+1)cout<<peakpositons[i]<<" ";
     cout<<endl;*/

      int peaks=INT_MIN,prev;
      for(int l=1;l+k-1<=n;l++)
      {
          int nex=l+k-1;
          int temp=sum[nex]-sum[l-1];
          if(peakpositons[nex]==1||peakpositons[l]==1)
            temp--;
          if(temp>peaks)
          {
             // cout<<"max changed at index"<<l<<" "<<l+k-1<<endl;

              peaks=temp;
              prev=l;
          }
          //cout<<"peaks "<<peaks<<" temp "<<temp<<endl;
      }

      cout<<peaks+1<<" "<<prev<<"\n";
    }


    return 0;
}
