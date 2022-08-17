#include<bits/stdc++.h>
using namespace std;

int xnor(int a,int b)
{

    return (a&b)|(!a&!b);
}
int main()
{

 int a,b,result;
 cin>>a>>b;
 result=xnor(a,b);
 cout<<result<<endl;


}
