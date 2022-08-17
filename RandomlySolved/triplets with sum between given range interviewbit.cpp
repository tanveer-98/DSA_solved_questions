#include<bits/stdc++.h>
using namespace std;

int solve(vector<string> &A) {
    vector<double>arr;
    int n=A.size();
    double prefix[n+1]={0};
    for(int i=0;i<n;i++)
    {
        arr.push_back(stod(A[i]));
    }
    sort(arr.begin(),arr.end());
    for(int i=1;i<=n;i++)
    {
        prefix[i]=arr[i-1]+prefix[i-1];
    }

    for(int i=3;i<=n;i++)
    {
        float cursum;
        cursum=prefix[i]-prefix[i-3];
        cout<<"cursum \n"<<cursum<<"\n";
        if(cursum<2&&cursum>1)
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    cin>>n;
    vector<string>A;
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        A.push_back(x);
    }
    int ans=solve(A);
    cout<<ans;
    return 0;
}
/*

3
0.503094
0.648924
0.999298



*/
