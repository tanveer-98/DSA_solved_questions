#include<bits/stdc++.h>
//largest integer a a<n-1 that is coprime of n
using namespace std;
void solve(int n)
{
    for(int i=n-2;i>=1;i--)
    {
        if(__gcd(i,n)==1)
        {
            cout<<i;
            break;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    solve(n);
    return 0;
}
