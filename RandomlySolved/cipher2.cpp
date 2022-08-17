#include<iostream>
#include<string.h>

using namespace std;
int main(){

    string str;
    cin>>str;
    int k,n,i,m,pos;
    cin>>k;
    for(i=0;i<str.length();i++)
    {
        if(str[i]>=65&&str[i]<=90){
            pos=str[i];
            if(pos+k>90)
            {
                n=90-pos;
                m=(k%26)-n;
                pos=64+m;
                str[i]=pos;

            }
            else{
                pos+=k;
                str[i]=pos;
            }


        }
        else if(str[i]>=48&&str[i]<=57){
            pos=int(str[i]);
            if(pos+k>57)
            {
                n=57-pos;
                m=(k%9)-n;
                pos=47+m;
                str[i]=pos;

            }
            else{
                pos+=k;
                str[i]=pos;
            }
        }
        else if(str[i]>=97&&str[i]<=122)
        {
            pos=str[i];
            if(pos+k>122)
            {
                n=122-pos;
                m=(k%26)-n;
                pos=96+m;
                str[i]=pos;

            }
            else
            {
                pos+=k;
                str[i]=pos;
            }


        }
        else
        {
          continue;

        }
    }

    cout<<str;

    return 0;
}
