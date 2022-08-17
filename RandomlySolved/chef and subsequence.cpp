#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <unordered_map>
using namespace std;
#define maxN 50

vector<vector<int64_t>> nCrLookup(maxN + 1, vector<int64_t>(maxN + 1, -1));

void buildnCrLookup()
{
    for (int i = 0; i <= maxN;i++)
    {

        nCrLookup[0][i] = 0;
        nCrLookup[i][i] = 1;
        nCrLookup[i][0] = 1;
    }
    for (int n = 1; n <= maxN; n++)
    {
        for (int k = 1; k < maxN; k++)
        {


            // The usual recurrence relation for nCr: see e.g. https://en.wikipedia.org/wiki/Binomial_coefficient
            nCrLookup[n][k] = nCrLookup[n - 1][k - 1] + nCrLookup[n - 1][k];
        }
    }
}

int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
         int n,k;
         cin>>n>>k;
         if(k>n)
         {
            cout<<0<<endl;
         }
         else
         {
         int arr[n];

         for(int i=0;i<n;i++)
         cin>>arr[i];
         sort(arr,arr+n);
         int max=arr[k-1];
         int occurence=count(arr,arr+k,max);
         int total=count(arr,arr+n,max);
         int64_t result=nCrLookup[total][occurence];
         cout<<result<<endl;
         }



    }


    return 0;
}
