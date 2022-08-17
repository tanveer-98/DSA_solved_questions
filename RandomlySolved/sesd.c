#include<iostream>

using namespace std;

int main()
{
    char str[10];
    cin>>str;

    int i=0,c=0;

    while(str[i]!='\0')
    {
        if(i!=2||i!=6||i!=1||i!=5){
            if((str[i]+str[i+1])&1){

                break;
            }
            else{
                c++;
            }

        }


        i++;
    }
    cout<<c;
    if(c==4&&(str[2]!='A'||str[2]!='E'||str[2]!='I'||str[2]!='O'||str[2]!='U'||str[2]!='Y'))
    {
        cout<<"valid";
    }
    else{
        cout<<"invalid";
    }

    return 0;
}
