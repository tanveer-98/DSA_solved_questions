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
    while(t--)
    {
        int n;
        cin>>n;
        list<int> mylist;



        fri(0,n)mylist.pb(i+1);

           for(auto i=mylist.begin();i!=mylist.end();i++)
        cout<<*i<<" ";
        cout<<endl;
        list<int>::iterator it = mylist.begin();

        if(n==1)
        cout<<mylist.front()<<endl;
        else if(n==2)
        {
            advance(it,1);
            cout<<*it<<endl;
        }
        else
        {


          while(mylist.size()>1)
            {
              it = mylist.begin();
              for(int i=1;i<=mylist.size();i++)
              {
                 if(i&1)
                 {
                     advance(it,i-1);
                     mylist.erase(it);
                 }

              }
                cout<<"---------------------"<<endl;
                for(auto i=mylist.begin();i!=mylist.end();i++)
                cout<<*i<<" ";
                cout<<"-----------------------"<<endl;
            }
           cout<<mylist.front()<<endl;
        }
         for(auto i=mylist.begin();i!=mylist.end();i++)
        cout<<*i<<" ";
        cout<<endl;

    }


    return 0;
}
