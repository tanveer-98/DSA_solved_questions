#include<iostream>
using namespace std;
#define UNASSIGNED 0
#define N 9
bool FindUnassignedLocation(int grid[N][N], int &row, int &col); // To check if there is any unassaigned location in the sudoku
bool isSafe(int grid[N][N], int row, int col, int num); // To check if the value-filled is suitable or not
void printGrid(int grid[N][N]);
bool sodukoSolver(int grid[N][N]);
bool sodukoSolver(int grid[N][N]){
//	printGrid(grid);
	int row, col, num;
	if(!FindUnassignedLocation(grid, row, col))
	 return true;

	for(num=1;num<=9;num++)
	{
		if(isSafe(grid,row,col,num)){
		grid[row][col]=num; // tentative assignment
		if(sodukoSolver(grid)) return true; // successful
		grid[row][col]=UNASSIGNED;
		}
	}
	return false; // This triggers back tracking
}
bool FindUnassignedLocation(int grid[N][N], int &row, int &col){
	for(row=0;row<N;row++)
		for(col=0;col<N;col++)
			if(grid[row][col]==UNASSIGNED)
				return true;

	return false;
}
bool UsedInRow(int grid[N][N], int row, int num){
	for(int col=0;col<N;col++)
		if(grid[row][col]==num)
			return true;
	return false;
}
bool UsedInCol(int grid[N][N], int col, int num){
	for(int row=0;row<N;row++)
		if(grid[row][col]==num)
			return true;
	return false;
}
bool UsedInBox(int grid[N][N], int boxStartRow, int boxStartCol, int num){
	for(int row=0;row<3;row++)
		for(int col=0;col<3;col++)
			if(grid[row+boxStartRow][col+boxStartCol]==num)
				return true;

	return false;
}

bool isSafe(int grid[N][N], int row, int col, int num){
	return (!UsedInRow(grid, row, num)&& !UsedInCol(grid, col, num)&& !UsedInBox(grid, row-row%3, col-col%3, num));
}

void printGrid(int grid[N][N])
{
	for(int row=0;row<N;row++){
		for(int col=0;col<N;col++)
			printf("%2d", grid[row][col]);
		printf("\n");
	}
}

int main(){

  int n = 9;
  int board[9][9];
  for(int i = 0; i < n ;i++){
	for(int j = 0; j < n; j++){
        	cin >> board[i][j];
        }
  }
  if(sudokuSolver(board)){
	cout << "true";
  }else{
	cout << "false";
  }
}




