#include<iostream>
using namespace std;

int main()
{
  int n,a=0,b=0,i=1;
  cin>>n;
  cout<<i;
  while(n>0){

    if(n>=1){
        a++;
        n-=i;
    }
    if(n>=1){
        b++;
        n=n-(i*2);

    }
    i++;

  }
  cout<<i;
  if(a>b){
      cout<<"Patlu";

  }
  else
  cout<<"Motu";
}
