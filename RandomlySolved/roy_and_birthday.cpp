#include<bits/stdc++.h>

#define ll long long int
#define fri(s,e) for(int i=s;i<e;i++)
#define frj(s,e) for(int j=s;j<e;j++)
#define db double
#define pb push_back
#define first fi
#define second sec
#define mod 1000000007

using namespace std;
bool isvowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    return true;
    else return false;
}
ll fact(ll a)
{
    if(a==1||a==0)
    return 1;
    else return (a*fact(a-1))%mod;
}
ll comb(ll a,ll b)
{

    ll result;
    ll nrfact=fact(a-b);
    ll rfact=fact(b);
    ll nfact=fact(a);
    result=(nfact)/((nrfact*rfact)%mod);
    return result;
}

ll divide(int alpha[])
{
    ll result=1;

    fri(1,27)
    {
        if(alpha[i]==1||alpha[i]==0)
        continue;
        else result=(result*fact(alpha[i]))%mod;
    }

    return result;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
      int alpha[27]={0};
      string s;
      cin>>s;

      int m=0,n=0;

      for(int i=0;i<s.length();i++)
      {
          alpha[s[i]-96]++;
          if(isvowel(s[i]))  n++;
          else m++;
      }
        fri(1,27)
      {
          cout<<alpha[i]<<" ";
      }
      cout<<endl;
      ll dividenum=divide(alpha);
      cout<<"dividenum is::"<<dividenum<<endl;

      if(m+1<n)
      cout<<-1<<endl;
      else
      {

        ll result=((((comb(m+1,n)*fact(n))%mod)*fact(m))%mod);

        cout<<result<<endl;
      }
    }


    return 0;
}
