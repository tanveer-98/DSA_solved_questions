#include <bits/stdc++.h>

using namespace std;

// Complete the sherlockAndAnagrams function below.
int sherlockAndAnagrams(string s) {
    int count =0;
    int len=s.length();
    for(int i=1;i<=len-1;i++)
    {
        vector<string> temp;
        //finding all substrings
        for(int j=0;j<=len-i;j++)
        {
            string st=s.substr(j,i);
            //cout<<st<<"\n";
            temp.push_back(st);


        }
        //sorting

        for(int j=0;j<temp.size();j++)
        {
            sort(temp[j].begin(),temp[j].end());

        }

        //matching
        for(int j=0;j<temp.size()-1;j++)
        {
            string one =temp[j];
            for(int k=j+1;k<temp.size();k++)
            {
                string two=temp[k];
                if(one==two)
                count++;
            }
        }
        temp.clear();


    }
    return count;
}

int main()
{


    int q;
    cin >> q;


   while(q--)
   {
        cin.ignore();

        string s;
        getline(cin, s);

        int result = sherlockAndAnagrams(s);

        cout << result << "\n";
    }



    return 0;
}
