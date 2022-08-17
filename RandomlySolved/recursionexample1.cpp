#include<iostream>
using namespace std;
void foo(int n)
{
    if(n!=0)
    {
        cout<<"foo-1-called"<<endl;
        foo(n-1);
        cout<<n<<endl;;
        cout<<"foo-2-called"<<endl;
        foo(n-1);

    }
}
int main()
{
int n;
cin>>n;
cout<<"foo called"<<endl;
foo(n);
return 0;
}
