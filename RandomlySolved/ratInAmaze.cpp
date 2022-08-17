#include<bits/stdc++.h>
using namespace std;
int visited[20][20];
void solve(int maze[][20],int row,int col,int n)
{


    if(row==n-1&&col==n-1)
    {

        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cout<<visited[i][j]<<" ";
                cout<<"\n";
        return;
    }


	if(row-1>0&&visited[row-1][col]!=1&&maze[row-1][col]!=0)
    {
        visited[row-1][col]=1;
        solve(maze,row-1,col,n);
        visited[row-1][col]=0;
    }
    if(row+1<n&&visited[row+1][col]!=1&&maze[row+1][col]!=0)
    {
        visited[row+1][col]=1;
        solve(maze,row+1,col,n);
        visited[row+1][col]=0;
    }
    if(col-1>0&&visited[row][col-1]!=1&&maze[row][col-1]!=0)
    {
        visited[row][col-1]=1;
        solve(maze,row,col-1,n);
        visited[row][col-1]=0;
    }
    if(col+1<n&&visited[row][col+1]!=1&&maze[row][col+1]!=0)
    {
        visited[row][col+1]=1;
        solve(maze,row,col+1,n);
        visited[row][col+1]=0;
    }
    return;
}
void ratInAMaze(int maze[][20], int n){
		memset(visited,0,sizeof(visited));
		visited[0][0]=1;
 		solve(maze,0,0,n);

}
int main(){

  int n;
  cin >> n ;
  int maze[20][20];
  for(int i = 0; i < n ;i++){
	for(int j = 0; j < n; j++){
        	cin >> maze[i][j];
        }
  }
  ratInAMaze(maze, n);
}


