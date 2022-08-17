#include <bits/stdc++.h>
using namespace std;

// Finds and stores result in st for a given
// string s.
void generate(set<string>& st, string s)
{
    if (s.size() == 0)
        return;

    // If current string is not already present.
    if (st.find(s) == st.end()) {
        st.insert(s);
        cout<<s<<" \n";

        // Traverse current string, one by one
        // remove every character and recur.
        for (int i = 0; i < s.size(); i++) {
            string t = s;
            t.erase(i, 1);
            generate(st, t);
        }
    }
    return;
}

// Driver code
int main()
{
    string s = "xyz";
    set<string> st;
    set<string>::iterator it;
    generate(st, s);
    for (auto it = st.begin(); it != st.end(); it++)
       // cout << *it << endl;
    return 0;
}
