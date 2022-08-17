#include<bits/stdc++.h>

using namespace std;

int atois(const string A) {
    //cout<<"in1\n";
    string number="";
    int l=A.length();
    int flag=0;
    char index;
    for(int i=0;i<l;i++)
    {
       // cout<<"number "<<number<<"\n";
        //cout<<"flag "<<flag<<"\n";
        if(flag==0&&(A[i]==' '||A[i]=='+'||(A[i]=='-'&&A[i+1]!=' ')))
        {

            continue;
        }
        else if(flag==0&&(A[i]<'1'||A[i]>'9'))
        {

                return 0;
        }
        else if(flag==0&&A[i]>='1'&&A[i]<='9')
        {
            flag=1;
            index=A[i-1];

        }


        if(flag==1)
        {
            if(A[i]>='1'&&A[i]<='9')
            number+=A[i];
            else break;
        }


    }
    /// cout<<"in2\n";
    //cout<<"number"<<number<<"\n";
    long long int intnum=0;
    // cout<<"in3\n";
    reverse(number.begin(),number.end());
    int l2=number.length();
    //cout<<"l2"<<l2<<"\n";
    for(int i=0;i<l2;i++)
    {
       // cout<<"digit = "<<number[i]-'0'<<"\n";
        if(intnum>INT_MAX)
        {
            if(index=='-')
            return INT_MIN;
            else return INT_MAX;
        }

        intnum+=(((long long int)(number[i]-'0'))*ceil(pow(10,i)));
       // cout<<"int num local "<<intnum<<"\n";
    }
   // cout<<"in\n";
            if(index=='-')
            return -1*intnum;
            else return intnum;

}
int main()
{

    string s;
    getline(cin,s);
    cout<<atois(s)<<"\n";
}
