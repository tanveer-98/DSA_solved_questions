#include <stdio.h>

#include<math.h>
int main()
{
     unsigned long long  n;
    scanf("%lld",&n);

     unsigned int M = 1000000007;

    unsigned long long f = 1;
     unsigned long long res;
    for (int i = 1; i <= n; i++)
        f = (f*2) % M;

      res=f-1;
     printf("%lld",res);
    return 0;
}
