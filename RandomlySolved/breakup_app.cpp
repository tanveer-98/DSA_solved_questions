#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    int n,i,j;
    cin>>n;

    string b[n];

    int c19=0,c20=0,others=0;

    for(i=0;i<n;i++)
    getline(cin,b[i]);

    for(i=0;i<n;i++)
    {
        if(b[i][0]=='G')
         {

            for(j=0;b[i][j]!='\0';j++)
             {
                if((b[i][j]=='1'&&b[i][j+1]=='9'))
                c19+=2;
            else if((b[i][j]=='2'&&b[i][j+1]=='0'))
                c20+=2;
                 else if((b[i][j]>='0'&&b[i][j]<='9')&&((b[i][j+1]>='0'&&b[i][j+1]<='9')||b[i][j+1]==32))
                others+=2;
             }
        }
        if(b[i][0]=='M')
         {
             for(j=0;b[i][j]!='\0';j++)
            {
                 if((b[i][j]=='1'&&b[i][j+1]=='9'))
                c19+=1;
               else if((b[i][j]=='2'&&b[i][j+1]=='0'))
                c20+=1;
                else if((b[i][j]>='0'&&b[i][j]<='9')&&((b[i][j+1]>='0'&&b[i][j+1]<='9')||b[i][j+1]==32))
                others+=1;
            }

         }
    }


    cout<<c19<<endl<<c20<<endl<<others<<endl;


        if(c19>others||c20>others)
        {
            cout<<"Date";
        }

    else if(c19==c20)
    cout<<"No Date";
    else
    cout<<"No Date";


    return 0;
}
