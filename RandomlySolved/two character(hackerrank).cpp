#include <bits/stdc++.h>

using namespace std;
int check(string temp)
{
 int len=temp.length();
 for(int i=0;i<len-1;i++)
    if(temp[i+1]==temp[i]) return 0;
 return 1;
}

// Complete the alternate function below.
int alternate(string s)
{
    int alphabets[27]={0};
    int len=s.length();
    for(int i=0;i<len;i++)
    alphabets[s[i]-'a'+1]++;
    string characters;
    for(int i=1;i<27;i++)
    {

        if(alphabets[i])
            characters.push_back('a'+i-1);
    }
    int clen=characters.length();
    cout<<characters<<" \n";
    string temp="";

    int result=INT_MIN;

    for(int i=0;i<clen-1;i++)
    {
        char A=characters[i];
        for(int j=i+1;j<clen;j++)
        {
            char B=characters[j];
            cout<<A<<" "<<B<<"\n";
            for(int k=0;k<len;k++)
            {

                if(s[k]==A||s[k]==B)
                    temp.push_back(s[k]);
            }
            int resl=temp.length();
            cout<<"\nSTRING:   "<<temp<<"\n";
            if(check(temp))
                result=max(resl,result);
            temp.clear();
        }
    }

    if(result<=0)
        return 0;
return result;

}

int main()
{



    string s;
    getline(cin, s);

    int result = alternate(s);

    cout << result << "\n";


    return 0;
}
