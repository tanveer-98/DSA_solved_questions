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

unordered_map<int,vector<int> > indexes;
int findFrequency(int left,
                      int right, int element)
{
    // Find the position of first occurrence of element
    int a = lower_bound(indexes[element].begin(),
                        indexes[element].end(),
                        left)
            - indexes[element].begin();

    // Find the position of last occurrence of element
    int b = upper_bound(indexes[element].begin(),
                        indexes[element].end(),
                        right)
            - indexes[element].begin();

    return b-a;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int numbers[n+1];
    int frequencies[m+1];
    memset(frequencies,0,sizeof(frequencies));

    fri(1,n+1){
        cin>>numbers[i];
        frequencies[numbers[i]]++;
        indexes[numbers[i]].pb(i);
    }
    int h[m+1];
    fri(1,m+1)cin>>h[i];
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        int flag=0;
        for(int i=l;i<=r;i++)
        {
            int felem,frange;
            felem=frequencies[numbers[i]];
            //cout<<"felem"<<felem<<"\n"<<"h[numbers] "<<h[numbers[i]]<<"\n";
            if(felem<h[numbers[i]])
            {
                flag=1;
                break;
            }
             frange=findFrequency(l,r,numbers[i]);
             if(frange!=h[numbers[i]]);
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
