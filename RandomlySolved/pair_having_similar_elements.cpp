include<bits/stdc++.h>
using namespace std;
int freq[1000000]={0};
void count_Freq(int arr[])
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]==arr[i]+1)
            {
                freq[i]=1;
            }
        }
    }
}
int  count_cons(int arr,int n)
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cnt+=freq[i];
    }
    return cnt;
}
void count_t(int arr,int n)
{

    int cnt_t=0;
    int length=0;
    for(int i=0;i<n;i++)
    {


    }

    return cnt_t;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int cnt=0,t_cnt=0;
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    count_Freq(arr);



}
