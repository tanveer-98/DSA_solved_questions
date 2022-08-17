#include<iostream>

using namespace std;

int main()
{
    char str[10];
    cin>>str;

    int i,c=0,d=0,res;

    for(i=0;str[i]!='\0';i++){
        if(i==0||i==3||i==4||i==7)
        {
            res=(int(str[i])+int(str[i+1]))%2;
            if(res==0)
                {
                c++;
            }

        }
        else
            continue;
    }

    if(str[2]=='A'||str[2]=='E'||str[2]=='I'||str[2]=='O'||str[2]=='U'||str[2]=='Y')
    d++;

    cout<<c;
    if(c==4&&d==0)
    {
        cout<<"valid";
    }
    else{
        cout<<"invalid";
    }

    return 0;
}
