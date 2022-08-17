#include<iostream>
using namespace std;
#define ll long long int
ll sum_of_digit(ll n)
{
    if (n == 0)
       return 0;
    return (n % 10 + sum_of_digit(n / 10));
}
ll convertbinary(ll dec)
{
    if(dec==0)
    return 0;
    else
    return (dec%2+(10*convertbinary(dec/2)));
}
int main()
{
    int dec;
    cin>>dec;
    ll bin=convertbinary(dec);
    cout<<"binary:  "<<convertbinary(dec)<<endl;
    cout<<"sum:  "<<sum_of_digit(bin);



}
