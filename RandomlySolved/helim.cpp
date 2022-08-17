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
        vector<int> myvec;
        for(int i=2;i<=n;i=i+2)
         myvec.pb(i);

        // for(auto i=myvec.begin();i!=myvec.end();i++)

       if(n==1)
      cout<<1<<endl;
      else if(n==2)
      cout<<2<<endl;   //  cout<<*i<<"  ";
     else
      {
            do
            {
                myvec.erase(myvec.begin());
                int temp=myvec.front();
                myvec.erase(myvec.begin());
                myvec.pb(temp);

            }
            while(myvec.size()>1);

                cout<<myvec.front()<<endl;
      }

     }


    return 0;
}
