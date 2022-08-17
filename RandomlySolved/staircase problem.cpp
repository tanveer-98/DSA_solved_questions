//this is not the exact staircase problem
/*
Joy is a short and lazy guy, he uses elevator to reach his flat.
 But unfortunately elevator is not working today and he became sad.
 Suddenly God came and made the stairs magical, such that he can jump on it in a magical way.
  Initially he can take 1 or 2 steps. If he jumps x steps at a time then in the next step he
  can climb either x or x+1 steps depending on his choice and he must reach exactly on n'th step.
 Help him find the minimum number of jumps to be made.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int test;
cin>>test;
while(test--)
{
long long int n;
cin>>n;
long long int x=1,s=0;
while(n>0){
n-=(x+1);
cout<<n<<"\n";
x= x+1;
s++;

}
cout<<s<<endl;
}
}
