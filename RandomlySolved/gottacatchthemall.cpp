#include<bits/stdc++.h>
using namespace std;
int countdiv(int arr[],int n)
{

    int c=0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
            if(i!=n/i)
            {
                c++;
            }
        }
    }
    arr[n]=c;
}
int main()
{

    int t;
    cin>>t;
    int n;
    cin>>n;

    int arr[n+1]={0};
    int i;

    for(i=1;i<=n;i++)
    countdiv(arr,i);

    while(t--)
    {


        int k,i,c=0;
        cin>>k;
        int strength=arr[k];
cout<<strength<<endl;

       sort(arr,arr+n+1);

       for(int i=1;i<n+1;i++)
       cout<<arr[i]<<" ";
       cout<<endl;
        for(i=1;i<n+1;i++)
            if(strength>arr[i])
            c++;
            else break;


        cout<<c<<endl;

    }

    return 0;
}
