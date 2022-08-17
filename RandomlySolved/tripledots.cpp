#include<bits/stdc++.h>
using namespace std;
int main()
{int k;
 cin>>k;
 string s;
  cin>>s;

  int length=s.length();
 // cout<<length<<"\n";

 if(length<=k)
   cout<<s;
 else
 {
   s.resize(k);
   s=s+"...";
   cout<<s;

 }




  return 0;
}
