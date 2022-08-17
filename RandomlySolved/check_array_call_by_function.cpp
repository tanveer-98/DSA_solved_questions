#include<iostream>
#include<algorithm>
using namespace std;


void arrange(int arr[],int n)
{
int i;
sort(arr,arr+n);

}
int main()
{
    int n;
    cin>>n;

    int arr[n],i;

    for(i=0;i<n;i++)
    cin>>arr[i];

    arrange(arr,n);
    for(i=0;i<n;i++)
cout<<arr[i]<<"\n";
    return 0;
}
