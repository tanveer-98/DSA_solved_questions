#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 int togglebit(int n)
{
    if (n == 0)
        return 1;
    int i = n;
    n |= n >> 1;
    n |= n >> 2;
    n |= n >> 4;
    n |= n >> 8;
    n |= n >> 16;

    return i ^ n;
}


int xnor(int num1, int num2)
{

    if (num1 < num2)
        swap(num1, num2);
    num1 = togglebit(num1);

    return num1 ^ num2;
}
s
int main()
{

 int a,b,result,n;
 cin>>a>>b>>n;
 xnoronacci(n,a,b);

}
