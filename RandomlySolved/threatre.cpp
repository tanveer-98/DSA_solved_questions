#include<bits/stdc++.h>
#define ll long long int
#define fri(s,e) for(int i=s;i<e;i++)
#define frj(s,e) for(int j=s;j<e;j++)
#define pb push_back
#define mp make_pair
#define pf push_front
#define veci vector<int>
#define vecb vector<bool>
#define f first
#define db double
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int maximum(int a,int b)
{
    return a>b?a:b;
}
int main()
{
    fast
    int t;cin>>t;
    int total_profits=0;
    while(t--)
    {
        int n;cin>>n;
        int sum=INT_MIN,cnt=0,value;
        if(n==0)
        {
            sum=-400;
        }
        else
        {
            string s1="ABCD",s2="0123";
            vector<vector<int> > movie_time(4,vector<int>(4,0));
            int cost[]={100,75,50,25};
            fri(0,n)
            {
                char movie;
                int time;
                cin>>movie>>time;
                movie_time[movie-'A'][(time)/4]++;
            }

            bool p=true;
            bool q=true;

            int cnt2=0;
            while(p)
            {
                while(q)
                {

                    int sm=0;
                    for(int i=0;i<4;i++)
                    {
                        value=movie_time[s1[i]-'A'][s2[i]-'0'];
                        //cout<<"value ";
                        //cout<<value<<endl;
                        if(value!=0)
                        {
                            sm+=(cost[cnt]*value);
                        }
                        else
                        {
                            sm-=100;
                        }
                        cnt++;
                    }
                    //cout<<"sums"<<endl;
                    //cout<<sm<<endl;
                    sum=maximum(sum,sm);
                    q=next_permutation(s2.begin(),s2.end());
                    //cout<<"next permutation ";
                    //cout<<s2<<endl;
                    cnt2++;
                    cnt=0;
                  }
                s2="0123";
                // cout<<"total permutations ";
                //cout<<cnt2<<endl;
                // cnt2=0;
                p=next_permutation(s1.begin(),s1.end());
                q=true;

            }

        }


        cout<<"sum"<<endl;
        cout<<sum<<endl;
        total_profits=total_profits+sum;
    }
    cout<<total_profits<<endl;


    return 0;
}
