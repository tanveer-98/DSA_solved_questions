#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s)
{

    int freq[27]={0};
    int len=s.length();
    for(int i=0;i<len;i++)
    {
        freq[s[i]-'a'+1]++;

    }
    sort(freq+1,freq+27);
    for(int i=1;i<27;i++)cout<<freq[i]<<" ";
    cout<<" \n";
    int cnt=1;

    for(int i=1;i<26;i++)
    {

        if(freq[i]!=freq[i+1]&&freq[i]!=0)
            cnt++;


    }
cout<<"cnt 2 "<<cnt<<" \n";
    if(cnt<2)
    return "YES\n";
    else if(cnt==2)
    {
        cout<<"SECOND CASE\n";
       int firstnumber=0,secondnumber=0;
       int number1,number2;
       int flag=0;
       for(int i=1;i<27;i++)
       {
              if(freq[i]==0)continue;
              if(freq[i]!=freq[i-1]&&freq[i-1]!=0)
              {


                  flag=1;
              }
              if(flag==0)
              {
                   number1=freq[i];

                  firstnumber++;
              }
              else
              {
                    number2=freq[i];
                     secondnumber++;
               }
       }
       cout<<"FIRST NUMBER ,SECOND NUMBER,NUMBER 1,NUMBER 2 \n"<<" "<<firstnumber<<" "<<secondnumber<<" "<<number1<<" " <<number2<<"\n";
       if(firstnumber==1||secondnumber==1)
       {

           if(abs(number1-number2)==1||(number1==1&&firstnumber==1)||(number2==1&&secondnumber==1))
           {
               return "YES\n";

           }
           else return "NO\n";

       }

       else return "NO\n";


    }else return "NO\n";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    cout << result << "\n";



    return 0;
}
