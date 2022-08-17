#include<bits/stdc++.h>
using namespace std;
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
void swap(int *a,int *b)
{
  		*a=*a+*b;
   		 *b=*a-*b;
   		 *a=*a-*b;

}
bool solve(int arr[],int n,int i)
{
	if(i==n-1)
    {
        //printarray(arr,n);
        for(int j=0;j<i+1;j++)
        if(arr[j]>arr[j+1])
             return false;
		return true;
    }

    if(arr[i]>arr[i+1]&&abs(arr[i]-arr[i+1])==1)
    {
        //cout<<"swapping these elements"<<arr[i]<<" "<<arr[i+1]<<"\n";
        swap(&arr[i],&arr[i+1]);
    }
        //printarray(arr,n);
   bool ans=solve(arr,n,i+1);
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
		int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        bool ans=solve(arr,n,0);
        if(ans)
            cout<<"Yes"<<"\n";
        else cout<<"No"<<"\n";
    }
	return 0;
}
