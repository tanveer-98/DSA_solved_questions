
#include <bits/stdc++.h>
using namespace std;


bool arePermutation(string str1, string str2)
{
    int n1 = str1.length();
    int n2 = str2.length();


    if (n1 != n2)
      return false;


    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());


    for (int i = 0; i < n1;  i++)
       if (str1[i] != str2[i])
         return false;

    return true;
}


int main()
{
    int t;
    cin>>t;

   while(t>0){

    string str1,str2;
     cin>>str1;
     cin>>str2;
    if (arePermutation(str1, str2))
      printf("YES");
    else
      printf("NO");

    cout<<"\n";

    t--;
   }
    return 0;

}
