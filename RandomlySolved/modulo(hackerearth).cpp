#include<iostream>
using namespace std;
int main()
{

    int i;
    int max;
    int A[1000];

    cin>>max;

    for(i=0;i<max;i++)
   {
       cin>>A[i];

   }

   long long int res;
   long long int ans=1;
    for(i=0;i<max;i++)
    {
            ans=(ans*A[i])%1000000007;
    }
    cout<<ans;
}
