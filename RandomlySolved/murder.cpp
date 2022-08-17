#include<iostream>
#define fri(s,e) for(int i=s;i<e;i++)
#define frj(s,e) for(int j=s;j<e;j++)
#define MAXN 100005
using namespace std;

long long int merge(long long int A[],long long int temp[],int l1,int r1,int l2,int r2)
{
    int i=l1;
    int j=l2;
    int k=l1;
    long long int sum=0;
    while(i<=r1&&j<=r2)
    {

       if(A[i]<A[j])
       {
           temp[k++]=A[i++];
           sum+=(A[i-1]*(r2-j+1));
       }

        else
        {
            temp[k++]=A[j++];

        }
    }
    while (i <= r1)
        temp[k++] = A[i++];
    while (j <= r2)
        temp[k++] = A[j++];
    for (int i = l1; i <= r2; i++)
        A[i] = temp[i];

    return sum;
}
long long int mergesort(long long int A[],long long int temp[],int left,int right)
{
    long long int inversions=0;
    if(left<right)
    {
        int mid=(left+right)/2;
        inversions+=mergesort(A,temp,left,mid);
        inversions+=mergesort(A,temp,mid+1,right);
        inversions+=merge(A,temp,left,mid,mid+1,right);

    }
    return inversions;
}
long long solve(long long int A[], int n)
{
    long long int temp[n];
    long long int inv=mergesort(A,temp,0,n-1);
    return inv;
}

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
      int n;cin>>n;
       long long int A[n];
        for(int i=0;i<n;i++)cin>>A[i];
     	cout<<solve(A,n)<<endl;
    }

}
