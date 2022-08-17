#include<iostream>
#define ll long long
using namespace std;
ll calculate(int total,int occurence)
{
    if(occurence==0||occurence==total)
    return 1;
    else

    return calculate(total-1,occurence-1)+calculate(total-1,occurence);
}
int  main()
{
    int n;
    ll result;
    result =calculate(5,2);
    cout<<result<<endl;
    return 0;
}
