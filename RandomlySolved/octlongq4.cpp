#include <time.h>
#include<bits/stdc++.h>
#define ll long long int
#define fri(s,e) for(int i=s;i<e;i++)
#define frj(s,e) for(int j=s;j<e;j++)
#define pb push_ back
#define pf push_front
#define f first
#define sec second
#define db double
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
/*ll power(ll x,ll y)
{
    ll res=1;
    while(y>0)
    {
        if(y%2==1)
            res=(res*x)%mod;
        x=(x*x)%mod;
        y=y/2;
    }
    return res;
}*/
int main()
{
    //clock_t t;
    int T;cin>>T;
    //t = clock();
    while(T--)
    {
        int n;
        scanf("%d",&n);
        int *arr=(int *)calloc(n,sizeof(int));
        int *temp=(int *)calloc(n,sizeof(int));
        fri(0,n)
        scanf("%d",&arr[i]);
        //cout<<endl;

        for(int i=1;i<=n-1;i++)
        for(int j=0;j<=i-1;j++)
        if(arr[j]%arr[i]==0)
        temp[i]++;
        //cout<<"printing the temparray"<<endl;
        //fri(0,n)cout<<temp[i]<<endl;
        sort(temp,temp+n);
        // int maxindex=distance(temp,max_element(temp,temp+n));
        //cout<<"maxindex"<<maxindex<<endl;
        printf("%d\n",temp[n-1]);

    }
    // t = clock() - t;
     //double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

    //printf("fun() took %f seconds to execute \n", time_taken);
    return 0;
}
