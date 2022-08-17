#include<iostream>
#include<string>

using namespace std;

int main(){

 string s;

 int l=s.length();
 int k,i;


 cin>>s;
 cin>>k;


 for(i=0;i<=l;i++){
     int actual_pos;

    if(int(s.at(i))>=48&&int(s.at(i)))
    {
         int Ashift=k%10;


          if((int(s.at(i))-Ashift)<48){
            actual_pos= 57-(Ashift-+(int(s.at(i))%48));
          }
          else{
            actual_pos=int(s.at(i))-Ashift;
            s.at(i)=s.at(actual_pos);
          }

    }
    else if(int(s.at(i))>=65&&int(s.at(i)))
    {
            int Ashift=k%26;


          if((int(s.at(i))-Ashift)<65){
            actual_pos= 90-(Ashift-+(int(s.at(i))%65));
          }
          else{
            actual_pos=int(s.at(i))-Ashift;
            s.at(i)=s.at(actual_pos);
          }
    }
    else if(int(s.at(i))>=97&&int(s.at(i))<=122)
    {
        int Ashift=k%26;


          if((int(s.at(i))-Ashift)<97){
            actual_pos= 122-(Ashift-+(int(s.at(i))%97));
          }
          else{
            actual_pos=int(s.at(i))-Ashift;
            s.at(i)=s.at(actual_pos);
          }

    }
    else{
        continue;
    }


 }
cout<<s;


return 0;
}
