#include<iostream>
using namespace std;
int main()
{
    int n,k,j=0;
    cin>>n>>k;
    int arr[n+1];
    int m=n,L=0;
    if(k>n||k<n/2)
    cout<<"No"<<endl;
    else

    {
        cout<<"Yes"<<endl;
        if(n%2==0)
        {
            if(k==n/2)
            {
                for(int i=1;i<n+1;i=i+2)
                {
                    arr[i]=i;
                }
                for(int i=2;i<n+1;i=i+2)
                {
                    arr[i]=m;
                    m=m-2;
                }
            }
            if(k>n/2)
            {
                for(int i=1;i<=k;i++)
                {
                    arr[i]=i;
                }
                for(int i=k+1;i<=n;i++)
                {
                   arr[i]=n-L;
                   L++;
                }
            }
        }

    }
    for(int i=1;i<=n;i++)
        cout<<arr[i]<<" ";
        return 0;

}
