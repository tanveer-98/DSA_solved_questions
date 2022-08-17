#include<iostream>
#define fri(s,e) for(int i=s;i<e;i++)
#define frj(s,e) for(int j=s;j<e;j++)
#define MAXN 100005
using namespace std;

long long int merge(int A[],int temp[],int l1,int r1,int l2,int r2)
{
    int i=l1;
    int j=l2;
    int k=l1;
    int inv_count=0;
    while(i<=r1&&j<=r2)
    {

        if(A[i]<=A[j])
        temp[k++]=A[i++];
        else
        {
            temp[k++]=A[j++];
            inv_count+=(r1-i+1);
        }
    }
    while (i <= r1)
        temp[k++] = A[i++];
    while (j <= r2)
        temp[k++] = A[j++];
    for (int i = l1; i <= r2; i++)
        A[i] = temp[i];
    return inv_count;
}
long long int mergesort(int A[],int temp[],int left,int right)
{
    long long int inversions=0;
    if(left<right)
    {
        int mid=(left+right)/2;
        inversions+=mergesort(A,temp,left,mid);
       // cout<<"inversions left"<<inversions<<endl;
        inversions+=mergesort(A,temp,mid+1,right);
       // cout<<"inversions right"<<inversions<<endl;
        inversions+=merge(A,temp,left,mid,mid+1,right);
       // cout<<"inversions merge "<<inversions<<endl;
    }
    return inversions;
}
long long solve(int A[], int n)
{
    int temp[n];
    long long int inv=mergesort(A,temp,0,n-1);
   // cout<<endl;
    //for(int i=0;i<n;i++)
       // cout<<A[i]<<" ";
       // cout<<"\n";
    return inv;
}

int main()
{
	int n,A[MAXN];
	cin>>n;
	for(int i = 0; i < n ; i++){
		cin>>A[i];
	}
	cout<<solve(A,n)<<endl;
}
