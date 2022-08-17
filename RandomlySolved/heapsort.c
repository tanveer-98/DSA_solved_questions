#include<iostream.h>
using namespace std;
void swap(int *x,int *y)
{
    *y=*x+*y;
    *x=*y-*x;
    *y=*y-*x;

}
void heapify(int arr[],int n,int i)
{
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(r<n&&arr[l]<arr[largest])
    largest=l;
    if(l<n&&arr[r]<arr[largest])
        largest=r;
    if(largest!=i)
    {

        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }


}
void heapsort(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    heapify(arr,n,i);
    for(int i=n-1;i>=0;i--)
    {
        swap(&arr[0],&arr[i]);
        heapify(arr,i,0);
    }
}
int main()
{

    int arr[]={4,10,3,5,1};
    int n=5;
    heapsort(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
