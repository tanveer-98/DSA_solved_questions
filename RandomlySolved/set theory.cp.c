#include<iostream>
using namespace std;
#include<set>
int main()
{
 set<int> s;
 s.insert(40);
s.insert(30);
s.insert(60);
s.insert(20);
s.insert(50);
s.insert(50);
s.insert(10);

for(int x: s)
cout<<x<<endl;




}
