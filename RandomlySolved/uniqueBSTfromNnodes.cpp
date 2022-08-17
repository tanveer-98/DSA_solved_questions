#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
ll dp[1001];
ll uniqueBSTs(int n)
{
    int n1, n2, sum = 0;
     if(dp[n]>0)
        return dp[n];
    if (n == 1 || n == 0)
        return 1;
    for (int i = 1; i <= n; i++) {
       n1 = uniqueBSTs(i - 1);
        n2 = uniqueBSTs(n - i);
        sum += n1 * n2;
    }
    dp[n]=sum;
    return sum;
}
ll countBST(int n)
{
    ll ans =uniqueBSTs(n);
    return ans;
}
int main()
{
    int n = 5;
    cout << countBST(n);
    return 0;
}
