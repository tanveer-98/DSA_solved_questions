#include<iostream>
using namespace std;
int cnt=0;
void solve(int n,int pos)
{
    if(pos==n)
    {
        cnt++;
        return;
    }
    solve(n,pos+1);
    solve(n,pos+2);
    solve(n,pos+3);
    return;
}
int main()
{

 int n;
 cin>>n;
 solve(n,0);
 cout<<cnt;



    return 0;
}
