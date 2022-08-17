#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int fact(int n);
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

// Returns factorial of n
int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
int solve(int n, vector<int> &B) {

    int prefix[n]={0};
    prefix[0]=B[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+B[i];
    }
    for(int i=0;i<n;i++)
    {

        cout<<prefix[i]<<" ";
    }
    cout<<" \n";
    int totalsum=prefix[n-1];
    if(totalsum==0)
        return nCr(n-1,2);
    cout<<" total sum"<<totalsum<<" \n";
    if(totalsum%3==0)
    {
        int onethird=totalsum/3;
        //cout<<"yes\n";
        int cnt[n]={0};
        //cout<<"yes2\n";
        int current=0;
        //cout<<"yes3\n";

        for(int i=n-1;i>=0;i--)
        {
            //cout<<"yes4\n";

            current+=(B[i]);
            if(current==onethird)
            {
                cnt[i]=1;
            }

        }

        for(int i=0;i<n;i++)
        {

        cout<<cnt[i]<<" ";
        }
        cout<<" \n";
        current=0;

        for(int i=0;i<n;i++)
        {
            if(prefix[i]==onethird)
            {
                current=i;
            }
        }
        int total=0;
        for(int i=current+2;i<n;i++)
        {
            if(cnt[i]==1)
            total++;
        }
        return total;

    }
    else return 0;

}
int main()
{
    int n;
    cin>>n;
    vector<int> B(n);
    for(int i=0;i<n;i++)
    {
        cin>>B[i];
    }
    int ans=solve(n,B);
    cout<<ans<<" \n";
    return 0;
}
