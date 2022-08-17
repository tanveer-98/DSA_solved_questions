//dynamic programming to find the longest increasing subsequence
#include<bits/stdc++.h>
using namespace std;
int lis(int arr[],int n)
{
    int c[n];
    fill(c,c+n,1);
    cout<<c[0]<<" "<<c[1]<<endl;
    int indexes[n+1];

    for(int i=1;i<n;i++)
    {
        int j=0;
        while(j<i)
        {
            if(arr[j]<arr[i])
            {
                if(c[j]+1>c[i])
                c[i]=c[j]+1;
            }
            j++;
        }

    }
    for(int i=0;i<n;i++)
        cout<<c[i]<<" ";
    cout<<endl;
    int mx=*max_element(c,c+n);
    return mx;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=lis(arr,n);
    cout<<ans;
    return 0;
}
