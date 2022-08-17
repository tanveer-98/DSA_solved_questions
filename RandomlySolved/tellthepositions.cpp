#include<bits/stdc++.h>
#include <map>
#include <set>

using namespace std;
struct comp
{
	template<typename T>
	bool operator()(const T& l, const T& r) const
	{
		if (l.second != r.second)
			return l.second > r.second;

		return l.first < r.first;
	}
};
int main()
{
    int n;
    cin>>n;
    string names[n];
    int sub1,sub2,sub3;
    int ranks[n];
    map<string,int> total;
    for(int i=0;i<n;i++)
    {

        cin>>names[i]>>sub1>>sub2>>sub3;
        int t=sub1+sub2+sub3;
        total[names[i]]=t;
    }
    map<string,int> ::iterator itr;
   /* for(itr=total.begin();itr!=total.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<"\n";
    }*/
    set<pair<string,int>, comp> st(total.begin(), total.end());
    cout<<"size"<<st.size()<<"\n";
    int cnt=1;
    set <string, int > :: iterator itr;
   for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
    {
        cout << itr->first<<" "<<itr->second;
    }

	return 0;
}
