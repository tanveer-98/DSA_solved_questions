//kmp algorithm
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int l1=s1.length();
    int l2=s2.length();
    int flag=0;
    int cnt=0;
    for(int i=0;i<=l1-l2;)
    {

        cnt=0;
        for(int j=0;j<=l2;j++)
        {

            if(s2[j]!=s1[i+j])
                {

                   i=i+j+1;
                }
            else{
                    cout<<s2[j]<<" ";
                cnt++;
                cout<<cnt<<" ";
                if(cnt==l2)
                {flag=1;
                    break;

                }
            }
        }
        if(flag==1){
            cout<<"found";
            flag=1;
            break;
        }


    }
    if(flag==0)
        cout<<"NOT found"<<endl;
    return 0;
}
