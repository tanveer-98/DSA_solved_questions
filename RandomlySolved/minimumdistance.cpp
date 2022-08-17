#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n;
    cin>>n;
    ll sum[n]={0};
    ll minimum=0;
    ll coordinate[n];
    for(ll i=0;i<n;i++)
    cin>>coordinate[i];
    int median,median1,median2,minimum1=0,minimum2=0;
    if(n%2!=0)
    {
        median=n/2;
        for(int j=0;j<n;j++)
        {
            if(j!=median)
                minimum+=abs(coordinate[median]-coordinate[j]);

        }
    }
    else
    {
        median1=n/2-1;
        median2=n/2;
        for(int j=0;j<n;j++)
        {
            if(j!=median1)
                minimum1+=abs(coordinate[median1]-coordinate[j]);
            if(j!=median2)
                minimum2+=abs(coordinate[median2]-coordinate[j]);

        }
        minimum=min(minimum1,minimum2);

    }

    cout<<minimum<<endl;



    return 0;
}
