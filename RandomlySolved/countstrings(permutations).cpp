

#include<cstring>
#include<iostream>
#define mod 1000000007
#define ll long long int
using namespace std;

int countStrings(char *s)
{
    int i, n;
    n = strlen(s);
    ll req = 0, dp[100005], arr[100005], ans = 0;
    for (i = 0; i < n; i++)
    {
        arr[i] = (ll)(90 - s[i]);
    }
    dp[n - 1] = arr[n - 1];
    for (i = n - 2; i >= 0; i--)
    {
        req = (arr[i + 1] + (26 * req) % mod) % mod;
        dp[i] = (arr[i] + (arr[i] * req) % mod) % mod;
    }
    for (i = 0; i < n; i++)
    {
        ans = (ans + dp[i]) % mod;
    }
    ans = ans % mod;
    return ans;
}
int main(){
	char s[100005];
    cin>>s;
    int ans = countStrings(s);
    cout<<ans<<endl;
}
