#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    long long int n,g,b,h1,h2,res;
    cin>>t;
    while(t--)
    {

        res=0;
        cin>>n>>g>>b;
        if(g>=n)
        {
            cout<<n<<endl;
            continue;
        }
        h1=(n+1)/2;
        res=(h1*(g+b))/g;
        if(h1%g==0)
        {
            cout<<"1 true\n";
           res-=b;
        }

        else {
                res+=(h1%g);
                cout<<"2 true\n" ;
        }
        cout<<res;
    }
}
