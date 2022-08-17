#include<bits/stdc++.h>
using namespace std;
void solve (int sum,int d)
{
    int n=d;
    int arr[d];
    int flag=0;
    if(d==1)
    {
        cout<<sum;
        return ;
    }
    while(d>0)
    {
        if(sum>=10)
        {
            arr[d-1]=9;
            sum-=9;
        }
        else
        {
            if(d>1)
            {
                 if (sum!=0)
                 {
                     flag=1;
                     sum-=1;
                     arr[0]=1;
                     arr[d-1]=sum;
                     sum=0;
                 }
                 else
                    arr[d-1]=sum;
            }
            else if (d==1&&flag==0)
            arr[0]=sum;
        }
     d--;
    }
    cout<<"\n";
    for(int i=0;i<n;i++)
    cout<<arr[i];
}
int main()
{
    int sum,d;
    cin>>sum>>d;
    solve(sum,d);
    return 0;
}
