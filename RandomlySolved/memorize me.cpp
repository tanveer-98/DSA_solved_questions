#include<iostream>
#include<algorithm>
using namespace std;
bool exist(int arr[],int num,int size);
int count(int arr[],int num,int size);
int main()
{
    int n;
    cin>>n;

    int arr[n],i;

    for(i=0;i<n;i++)
    cin>>arr[n];


    while(n--){



    int number;
    cin>>number;

    if(exist(arr,number,n))
    {
      count(arr,number,n);
    }
    else
    cout<<"NOT PRESENT\n";


    }
    return 0;
}
bool exist(int arr[],int num,int size)
{
   int i;

   sort(arr,arr+size);


    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<"\n";
    }
  /* for(i=0;i<size;i++)
    {
        if(arr[i]==num)
        return true;
    }

   return false;*/
}
int count(int arr[],int num,int size)
{
   int i,c=0;

   for(i=0;i<size;i++)
    {
        if(arr[i]==num)
        c++;

    }
    cout<<c<<"\n";
   }
