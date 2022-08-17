// A Dynamic Programming solution for Rod cutting problem
#include<iostream>

using namespace std;
// A utility function to get the maximum of two integers
int max(int a, int b) { return (a > b)? a : b;}

/* Returns the best obtainable price for a rod of length n and
   price[] as prices of different pieces */
void extended_cutRod(int price[], int n)
{
   int val[n+1];
   val[0] = 0;
   int i, j;
   int s[n+1]={0};
   int max_index;

   // Build the table val[] in bottom up manner and return the last entry
   // from the table
   for (i = 1; i<=n; i++)
   {
       int max_val = INT_MIN;
       for (j = 1; j <=i; j++)
         {
                if(max_val<price[j] + val[i-j])
                {   max_val = price[j] + val[i-j];
                    s[i]=j;
                }
         }
       val[i] = max_val;
   }
cout<<"printing all the values in the S array"<<endl;
for(int i=0;i<=n;i++)
    cout<<s[i]<<" ";
cout<<endl;
    //   return val[n];
      //printing sizes of the cuts
      int temp=n;
      cout<<"the optimal cuts are "<<endl;
      while(temp>0)
      {

        cout<<s[temp]<<" ";
        temp-=s[temp];
      }


}

/* Driver program to test above functions */
int main()
{
    int arr[] = {0,1, 5, 8, 9, 10, 17, 17, 20};
    int siz = sizeof(arr)/sizeof(arr[0]);
  extended_cutRod(arr, 5);

    return 0;
}
