#include<bits/stdc++.h>
#define ll long long int
#define fri(s,e) for(int i=s;i<e;i++)
#define frj(s,e) for(int j=s;j<e;j++)
#define pb push_ back
#define pf push_front
#define f first
#define sec second
#define db double
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int A[n],B[n];
      fri(0,n)
      scanf("%d",&A[i]);
      fri(0,n)
      scanf("%d",&B[i]);
      int score[n]={0};
      int maxscore=0;
      fri(0,n)
      {
        score[i]=A[i]*20-B[i]*10;
        if(score[i]<0)
        score[i]=0;
        maxscore=max(maxscore,score[i]);
      }
      cout<<maxscore<<endl;
    }


    return 0;
}
