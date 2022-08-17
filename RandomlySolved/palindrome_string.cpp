#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        string s;
        cin>>s;

        int i,j,start=0;
        int l=s.length();
        int end=l-1;
        int c=0;
        cout<<"end:"<<end<<endl;

        for(i=start,j=end;start<end;i++,j--)
        {
            if(s.at(i)!=s.at(j-1))
            {
                cout<<"NO"<<endl;
                c++;
                break;

            }


        }
        cout<<c<<endl;
        if(c==0&&l%2==0)
        cout<<"YES EVEN"<<endl;
        else if(c==0&&l%2!=0)
        cout<<"YES ODD"<<endl;

    }


    return 0;
}
