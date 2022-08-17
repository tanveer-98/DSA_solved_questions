#include<bits/stdc++.h>
using namespace std;
vector<char> intersection(vector<char> &v1,
                                      vector<char> &v2){
    vector<char> v3;

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    set_intersection(v1.begin(),v1.end(),
                          v2.begin(),v2.end(),
                          back_inserter(v3));
    return v3;
}
int main()
{
    vector<char> a;
    vector<char>b;
    a.push_back('a');
    a.push_back('b');
    b.push_back('a');
    vector<char>c=intersection(a,b);
    for( auto i:c)
    {

        cout<<i;
    }

}
