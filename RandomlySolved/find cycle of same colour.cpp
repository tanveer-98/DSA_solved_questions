/*
Gary has a board of size NxM. Each cell in the board is a coloured dot.
There exist only 26 colours denoted by uppercase Latin characters
(i.e. A,B,...,Z). Now Gary is getting bore and wants to play a game.
The key of this game is to find a cycle that contain dots of same colour.
 Formally, we call a sequence of dots d1, d2, ..., dk a cycle if and only if it meets
the following condition:
*/
#include<bits/stdc++.h>
using namespace std;
#define MAXN 51
int visited[MAXN][MAXN]={{0}};
int x[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int y[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
int k=0;
int SOLVE(char board[][MAXN],int n,int m,int startrow,int startcol)
{

   int res=0;
    for(int dir=0;dir<8;dir++)
    {
        int xnew=startrow+x[dir];
        int cnew=startcol+y[dir];

        if((xnew<0||xnew>n||cnew<0||cnew>m)||visited[xnew][cnew]==1)
        {
          cout<<"k "<<k<<"\n";

          if(board[xnew][cnew]==board[startrow][startcol]&&k>=4)
            return 1;
          else
            continue;
        }
        else
        {
            if(board[xnew][cnew]!=board[startrow][startcol])
            {
             continue;
            }
            else
            {
                visited[xnew][cnew]=1;
                k++;
                res=SOLVE(board,n,m,xnew,cnew)|res;
                if(res==1&&k+1>=4)
                {
                    break;
                }
                visited[xnew][cnew]=0;
            }

        }
    }
    return res;

}
int solve(char board[][MAXN],int n,int m)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            { k++;
                visited[i][j]=1;
                if(SOLVE( board, n,m,i,j))
                {
                    //cout<<"k "<<k<<"\n";
                   if(k+1>=4)
                    {
                        return 1;
                        break;
                    }
                }
                visited[i][j]=0;
                k=0;
            }
    return 0;
}
int main()
{
	int N,M,i;
	char board[MAXN][MAXN];
	cin>>N>>M;
	for(i = 0;i < N; i++){
		cin>>board[i];
	}
	cout<<solve(board,N,M)<<endl;
}
