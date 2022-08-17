#include<bits/stdc++.h>
#define ll long long int
#define fri(s,e) for(int i=s;i<e;i++)
#define frj(s,e) for(int j=s;j<e;j++)
#define pb push_back
#define mp make_pair
#define pf push_front
#define veci vector<int>
#define vecb vector<bool>
#define f first
#define sec second
#define db double
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
#define nl “\n”
int main()
{
    int n,m;
    cin>>n>>m;
    int numbers[n+1];
    fri(1,n+1)cin>>numbers[i];
    int h[m+1];
    fri(1,m+1)cin>>h[i];
    int freq[m+1][n+1];
    memset(freq,0,sizeof(freq));
    //making the table
    for(int i=1;i<=n;i++)
    freq[numbers[i]][i]=1;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            freq[i][j]+=freq[i][j-1];
    for(int i=0;i<=m;i++)
    {
       for(int j=0;j<=n;j++)
            cout<<freq[i][j]<<" ";
        cout<<endl;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        int flag=0;
        for(int i=l;i<=r;i++)
        {
            int felem;
            felem=freq[numbers[i]][r]-freq[numbers[i]][l-1];
            //cout<<"felem"<<felem<<"\n"<<"h[numbers] "<<h[numbers[i]]<<"\n";

            if(felem!=h[numbers[i]])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"1\n";
        else cout<<"0\n";

    }





    return 0;
}
