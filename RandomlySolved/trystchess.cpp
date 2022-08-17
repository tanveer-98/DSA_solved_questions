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
#define sec second
#define db double
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int board[10][10];
bool visited[10][10];
int cnt=0;
void findplaces(int n,int step,int row,int col)
{
     if(step>n||visited[row][col]==true)
        return;
    if(step<=n&& step!=0)
    {
        //cout<<"step"<<step<<endl;
       // cout<<"row "<<row<<" col "<<col<<endl;
        cnt++;
        visited[row][col]=true;
    }


    if(!(row+2>=n&&col+1>=n&&step>n)&&visited[row+2][col+1]==false)
     {
        //cout<<"down right"<<endl;
         findplaces(n,step+1,row+2,col+1);
     }

    if(!(row+2>=n&&col-1<0&&step>n)&&visited[row+2][col-1]==false)
     {
        //cout<<"down right"<<endl;
         findplaces(n,step+1,row+2,col-1);
     }

     if(!(row-2<0&&col+1>=n&&step>n)&&visited[row-2][col+1]==false)
     {
        //cout<<"up right"<<endl;
         findplaces(n,step+1,row-2,col+1);
     }

     if(!(row-2<0&&col-1<0&&step>n)&&visited[row-2][col-1]==false)
     {
        //cout<<"up left"<<endl;
        findplaces(n,step+1,row-2,col-1);}

     if(!(col+2>=n&&row+1>=n&&step>n)&&visited[row+1][col+2]==false)

        {
            //cout<<"right down"<<endl;
            findplaces(n,step+1,row+1,col+2);
     }

     if(!(col+2>=n&&row-1<0&&step>n)&&visited[row-1][col+2]==false)
     {
         //cout<<"right up"<<endl;
         findplaces(n,step+1,row-1,col+2);}

     if(!(col-2<0&&row+1>=n&&step>n)&&visited[row+1][col-2]==false)
     {
           // cout<<"left down"<<endl;
            findplaces(n,step+1,row+1,col-2);
     }

     if(!(col-2<0&&row-1<0&&step>n)&&visited[row-1][col-2]==false)
    {
        //cout<<"left up"<<endl;
     findplaces(n,step+1,row-1,col-2);
    }



}
void solve(int n,int row,int col)
{

    memset(visited,0,sizeof(visited));
    findplaces(n,0,row,col);
}
int main()
{
    int i,j,moves;
    cin>>i>>j>>moves;
    solve(moves,i,j);
    cout<<cnt;
    return 0;
}

