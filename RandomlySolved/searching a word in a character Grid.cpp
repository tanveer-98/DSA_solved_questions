#include<bits/stdc++.h>
using namespace std;
#define MAXN 102
int x[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int y[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
int visited[MAXN][MAXN]={{0}};
int flag=0;
int SOLVE(char Graph[][MAXN],int N,int M,string word,int startrow,int startcol,int start)
{

   //cout<<"startrow "<<startrow<<" "<<"startcol "<<startcol<<"\n";
   //cout<<"word[start] "<<word[start]<<"\n";
   for(int i=0;i<N;i++)
   {
       for(int j=0;j<M;j++)
            cout<<visited[i][j]<<" ";
        cout<<"\n";

   }
   cout<<"\n";
    if(Graph[startrow][startcol]!=word[start])
        {
            //visited[startrow][startcol]=0;
            return 0;
        }
    else
   {

      //  cout<<"start "<<start<<"word " <<word[start]<<" \n";
       // cout<<word[start];
    }
    if(start==10)
    {
        flag=1;
        return 1;
    }
    int res=0;
    for( int dir=0;dir<8;dir++)
    {
         int nextr,nextc;
         nextr=startrow+x[dir];
         nextc=startcol+y[dir];
         if(nextr>=0&&nextr<N&&nextc>=0&&nextc<M&&visited[nextr][nextc]==0)
            {
                //cout<<"start "<<start<<"\n";
                visited[nextr][nextc]=1;
                res=SOLVE(Graph,N,M,word,nextr,nextc,start+1)|res;
                if(flag==1)
                    break;
             	visited[nextr][nextc]=0;
            }
    }
    return res;
}
int solve(char Graph[][MAXN],int N, int M)
{
    string word="CODINGNINJA";
    if(N*M<word.length())
        return 0;
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
        {
            visited[i][j]=1;
            if(SOLVE(Graph,N,M,word,i,j,0))
            return 1;
            visited[i][j]=0;
        }
    return 0;

}
int main()
{
	int N,M,i;
	char Graph[MAXN][MAXN];
	cin>>N>>M;
	for(i = 0;i < N; i++){
		cin>>Graph[i];
	}
	cout<<solve(Graph,N,M)<<endl;
}
