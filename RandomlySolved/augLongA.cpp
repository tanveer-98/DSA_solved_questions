#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    int t;
    cin>>t;
    while(t--)
    {

        ll flag=0;
        ll health,p;
        cin>>health>>p;
        if(p==0)
        {
            cout<<"0\n";
            continue;
        }
        while(true)
        {
            if(p>=health)
            {
                flag=1;
                break;
            }
            else if(p==0&& health>0)
            {
                flag=0;
                break;
            }
            health=health-p;
            p=floor(p/2);
        }
        if(flag==1)
        cout<<"1\n";
        else cout<<"0\n";
    }
	return 0;
}
