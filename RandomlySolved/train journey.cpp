
#include<iostream>
using namespace std;
int main(){
 int T;
 cin>>T;
 int s[1000];
 int i,n;

 for(i=0;i<T;i++){
    cin>>n;
   if((n+7)%8==0||(n+4)%8==0)
    s[i]=1;
    if((n+6)%8==0||(n+3)%8==0)
    s[i]=2;
    if((n+5)%8==0||(n+2)%8==0)
    s[i]=3;
    if(n+1%8==0)
    s[i]=4;
    if(n%8==0)
    s[i]=5;

    }

 for(i=0;i<T;i++){

        if(s[i]==1)
         cout<<"L";
        if(s[i]==2)
         cout<<"M";
         if(s[i]==3)
         cout<<"U";
         if(s[i]==4)
         cout<<"SL";
         if(s[i]==5)
         cout<<"SU";
         cout<<"\n";
 }

 return 0;
}
