#include<iostream>

using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--){

        int N;
        cin>>N;

        int arr[N]={0},i,sum=0,c=0;

        for(i=0;i<N;i++)
        cin>>arr[i];

        for(i=0;i<N;i++)
            sum=sum+arr[i];
        cout<<sum<<"\n";
        for(i=0;i<N;i++)
        {
            int sumr=sum-arr[i];
            cout<<sumr<<"\n";
            if(arr[i]>=sumr)
            {
                c++;
                break;
            }
        }
        cout<<c<<"\n";

        if(c==0)
        cout<<"Yes";
        else
        cout<<"No";

        cout<<"\n";
    }


    return 0;
}
