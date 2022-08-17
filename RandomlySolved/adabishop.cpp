#include<bits/stdc++.h>
#define ll long long int
#define fri(s,e) for(int i=s;i<e;i++)
#define frj(s,e) for(int j=s;j<e;j++)
#define pb push_back
#define pf push_front
#define f first
#define sec second
#define db double
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
                int r,c,tmp,state=0;
                cin>>r>>c;
                if(r<c)
                { state=1;
                    tmp=(r+(c-r)/2);
                    cout<<"27"<<endl;
                    cout<<tmp<<" "<<tmp<<"\n";
                    cout<<"1 1"<<"\n";

                }
                else if(r==c&&r!=1)
                {
                    state=1;
                    cout<<"26"<<endl;
                    cout<<"1 1"<<"\n";
                }
                else if(r>c)
                {
                    state=1;
                    tmp=(c+(r-c)/2);
                    cout<<"27"<<endl;
                    cout<<tmp<<" "<<tmp<<"\n";
                    cout<<"1 1"<<"\n";

                }
                 if(state==0)
                    cout<<"25"<<endl;
                    cout<<"2 2"<<"\n";
                    cout<<"3 1"<<"\n";
                    cout<<"1 3"<<"\n";
                    cout<<"2 2"<<"\n";
                    cout<<"3 3"<<"\n";
                    cout<<"5 1"<<"\n";
                    cout<<"1 5"<<"\n";
                    cout<<"3 3"<<"\n";
                    cout<<"4 4"<<"\n";
                    cout<<"7 1"<<"\n";
                    cout<<"1 7"<<"\n";
                    cout<<"4 4"<<"\n";
                    cout<<"5 5"<<"\n";
                    cout<<"8 2"<<"\n";
                    cout<<"2 8"<<"\n";
                    cout<<"5 5"<<"\n";
                    cout<<"6 6"<<"\n";
                    cout<<"8 4"<<"\n";
                    cout<<"4 8"<<"\n";
                    cout<<"6 6"<<"\n";
                    cout<<"7 7"<<"\n";
                    cout<<"8 6"<<"\n";
                    cout<<"6 8"<<"\n";
                    cout<<"7 7"<<"\n";
                    cout<<"8 8"<<"\n";


    }
}
