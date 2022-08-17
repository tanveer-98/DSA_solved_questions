#include<bits/stdc++.h>
using namespace std;
int board[10][10];
void printSolution(int N)
{

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%d  ", board[i][j]);

    }
    printf("\n");
}
bool isSafe(int n,int row,int col)
{
	int i,j;
    // to check the left places
    for(i=0;i<row;i++)
        if(board[i][col])
            return false;
    //to check the upper diagonals
    for(i=row,j=col;i>=0&&j>=0;i--,j--)
        if(board[i][j])
            return false;
    //to check the lower diagonals

    for(i=row,j=col;i>=0&&j<n;i--,j++)
        if(board[i][j])
            return false;

    return true;
}
bool solveNqueen(int N,int row)
{
	if(row==N)
    {

        printSolution(N);
            return true;
    }

    bool res=false;
    for(int i=0;i<N;i++)
    {


        if(isSafe(N,row,i))
        {
            board[row][i]=1;
            res=solveNqueen(N,row+1)||res;
            board[row][i]=0;


        }
    }
    return res;


}
void solve(int N)
{
    memset(board,0,sizeof(board));
    int flag=solveNqueen(N,0);
    return;

}
void placeNQueens(int N){

	 solve(N);

}
int main(){

  int n;
  cin >> n ;
  placeNQueens(n);

}


