#include<iostream>
#include <string>
#include<math.h>
using namespace std;
int convert(string s)
{
    int num=0;
    for(int i=0;i<s.length();i++)
    {

        num=num+(int(s[i]-48))*pow(10,s.length()-i-1);
    }
    return num+1;

}
int main()
{
    string s;
    cin>>s;
    int num=999999;
    int count=0,j=0;
    if(s.length()>64)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    string temp="";
    for(int i=0;i<=s.length();i++)
    {
       if(s[i]!='.'&&s[i]!='\0'){
        temp=temp+s[i];

       }

       else
       {
           j++;
           if(!isdigit(temp[0]))
           {

               cout<<"NO"<<endl;
               return 0;
           }
           num=convert(temp);
           //cout<<num<<endl;
           if(num<=255&&j<=4)
           {
               temp="";
               continue;
           }
           else
           {
               count=1;
               cout<<"NO"<<endl;
               break;
           }
       }


    }
    if(count==0&&num!=999999&&j==4)cout<<"YES";


    return 0;
}
