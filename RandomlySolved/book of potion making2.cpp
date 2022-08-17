#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int sum=0,i;

    if(str.length()!=10)
    {
        cout<<"Illegal ISBN";
        return 0;
    }
    else{
        for(i=0;i<str.length();i++){
            sum+=str[i];
        }
     cout<<str.length()<<"  "<<str[i];
    if(sum%11==0)
        {
            cout<<"Legal ISBN";
         }
        else
            cout<<"Illegal ISBN";
    }
    return 0;
}
