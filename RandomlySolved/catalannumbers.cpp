#include <iostream>
#define mod 1000000007
using namespace std;
int uniqueBSTs(int n)
{
    int n1, n2, sum = 0;
    if (n == 1 || n == 0)
        return 1;
    for (int i = 1; i <= n; i++) {
        n1 = uniqueBSTs(i - 1)%mod;
        n2 = uniqueBSTs(n - i)%mod;
        sum =(sum+(n1 * n2)%mod)%mod;
    }
    return sum;
}

// Driver code
int main()
{
    int n;
    cin>>n;
    cout << uniqueBSTs(n);

    return 0;
}
