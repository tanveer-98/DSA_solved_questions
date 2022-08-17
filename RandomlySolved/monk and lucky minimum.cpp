#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],fre[n]={0};
        int i,val;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            val=arr[i];
            fre[val]++;
        }

        sort(arr,arr+n);

        int min=arr[0];

        if(fre[min]%2==0)
        cout<<"Unlucky";
        else
        cout<<"Lucky";


        cout<<"\n";


    }




    return 0;
}
