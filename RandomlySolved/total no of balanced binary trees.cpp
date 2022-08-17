#include <iostream>

#include <cmath>
#define  mod 1000000007
#define ll long long int
using namespace std;
ll balancedBTs(int h) {
  ll  dp[h+1];
  dp[0]=1;
  dp[1]=1;
  for(int i=2;i<=h;i++)
  {

      dp[i]=((dp[i-1]*dp[i-1])%mod+(2*(dp[i-1]%mod*dp[i-2]%mod)%mod)%mod)%mod;
  }
  return dp[h];
}


int main() {
    int h;
    cin >> h;
    ll ans = balancedBTs(h);
    cout << ans << endl;
}
