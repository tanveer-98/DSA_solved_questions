#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &A) {
    int n=A.size(), e=0,o=0,ans=0;
    if(n==0) return 0;
    if(n==1) return 1;

    for(int i=0; i<n; i+=2) e+=A[i];
    for(int i=1; i<n; i+=2) o+=A[i];

    e-=A[0];
    if(e==o) ans++;
    for(int i=1; i<n; i++)
    {
        cout<<"E= "<<e<<" O= "<<o<<"\n";
        if(i%2){
            o-=A[i];
            o+=A[i-1];
        }
        else{
            e-=A[i];
            e+=A[i-1];
        }

        if(e==o) ans++;
    }



    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int>A;
    while(n--)
    {
        int x;
        cin>>x;
        A.push_back(x);
    }
    int ans=solve(A);
    cout<<ans<<"\n";
}
