#include<bits/stdc++.h>
using namespace std;
char s[1005][1005];
int n,c=0;
void count(int i,int j)
{
    if(i<0 || j<0 || i>=n || j>=n)
        return ;
    if(s[i][j]=='T')
    {
        c++;
        s[i][j]='W';
        count(i-1,j);
        count(i,j-1);
        count(i+1,j);
        count(i,j+1);
    }
}
int main()
{
    int x=0;
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>s[i][j];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[i][j]=='T')
            {
                count(i,j);
                if(c>x)
                    x=c;
                c=0;
            }
        }
    }
    cout<<x;
}
