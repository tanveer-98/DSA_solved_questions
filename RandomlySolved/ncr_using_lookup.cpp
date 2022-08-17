#include<iostream>
#include<algorithm>
#include<vector>
#include <cassert>
#include<limits>
#define ll long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

constexpr auto maxN = 50;
llarr[maxN][maxN];

void buildnCrLookup()
{
    for (auto n = 0; n <= maxN; n++)
    {
        nCrLookup[0][n] = 0;
        nCrLookup[n][n] = 1;
        nCrLookup[n][0] = 1;
    }
    for (auto n = 1; n <= maxN; n++)
    {
        for (auto k = 1; k < maxN; k++)
        {
            assert(nCrLookup[n - 1][k - 1] != -1);
            assert(nCrLookup[n - 1][k] != -1);

            // The usual recurrence relation for nCr: see e.g. https://en.wikipedia.org/wiki/Binomial_coefficient
            nCrLookup[n][k] = nCrLookup[n - 1][k - 1] + nCrLookup[n - 1][k];
        }
    }
}
int main()
{


         ll result=nCrLookup[5][5];
         cout<<result<<endl;




    return 0;
}
