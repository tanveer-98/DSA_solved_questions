#include<bits/stdc++.h>
using namespace std;
void uniqueChar(char *s){
    string temp="";
    for(int i=0;i<strlen(s);i++)
    {
        if(temp.find(s[i])==-1)
            temp+=s[i];
    }
    //cout<<temp<<endl;
    int lent=temp.size();
    for(int i=0;i<lent;i++)
    s[i]=temp[i];
    s[lent]='\0';
}
int main()
{

    char s[50000];
    gets(s);

    uniqueChar(s);
    for(int i=0;s[i]!='\0';i++)
    cout<<s[i];



    return 0;
}
